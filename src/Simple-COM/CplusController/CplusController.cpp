// CplusController.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <tchar.h>
#include <string>
#include <comutil.h>

#import  "D:\Sync-Tony-Tcsec\Code\Git\Cplus2Net\src\Simple-COM\NetLibrary\bin\Debug\NetLibraryCom.tlb" named_guids raw_interfaces_only

int main()
{
	using namespace std;
	HRESULT init = CoInitialize(NULL);
	if (init != S_OK)
		return -1;
	NetLibraryCom::ITestPtr test;
	HRESULT hr = test.CreateInstance(__uuidof(NetLibraryCom::Test));
	if (hr != S_OK)
	{
		return -1;
	}

	BSTR* btr = new BSTR[64];

	test->GetInfo(btr);
	string str = _com_util::ConvertBSTRToString(*btr);
	cout << str << endl;

	test->SetInfo(_com_util::ConvertStringToBSTR("输入1a"), btr);
	str= _com_util::ConvertBSTRToString(*btr);
	cout << str << endl;

	cin.get();
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
