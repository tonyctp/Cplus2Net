// CplusController.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <metahost.h>
#pragma comment(lib,"mscoree.lib")
using namespace std;

constexpr auto FRAMWORK_VERSION = L"v4.0.30319";;
constexpr auto DLL_FULL_PATH = L"NetLibrary.dll";
constexpr auto CLASS_FULL_NAME = L"NetLibrary.Test";
constexpr auto METHOD_NAME = L"GetInfo";

int main()
{
	ICLRMetaHost* pMetaHost = NULL;
	ICLRMetaHostPolicy* pMetaHostPolicy = NULL;
	ICLRDebugging* pCLRDebugging = NULL;
	HRESULT hr;
	hr = CLRCreateInstance(CLSID_CLRMetaHost, IID_ICLRMetaHost,
		(LPVOID*)&pMetaHost);
	hr = CLRCreateInstance(CLSID_CLRMetaHostPolicy, IID_ICLRMetaHostPolicy,
		(LPVOID*)&pMetaHostPolicy);
	hr = CLRCreateInstance(CLSID_CLRDebugging, IID_ICLRDebugging,
		(LPVOID*)&pCLRDebugging);
	
	ICLRRuntimeInfo* pRuntimeInfo = NULL;
	hr = pMetaHost->GetRuntime(FRAMWORK_VERSION, IID_ICLRRuntimeInfo, (LPVOID*)&pRuntimeInfo);
	ICLRRuntimeHost* pRuntimeHost = NULL;
	pRuntimeInfo->GetInterface(CLSID_CLRRuntimeHost, IID_ICLRRuntimeHost, (LPVOID*)&pRuntimeHost);
	hr = pRuntimeHost->Start();
	DWORD dwRetCode;
	hr = pRuntimeHost->ExecuteInDefaultAppDomain(DLL_FULL_PATH, CLASS_FULL_NAME, METHOD_NAME, L"测试", &dwRetCode);

	pRuntimeHost->Stop();
	pRuntimeHost->Release();
	pRuntimeInfo->Release();
	pCLRDebugging->Release();
	pMetaHostPolicy->Release();
	pMetaHost->Release();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
