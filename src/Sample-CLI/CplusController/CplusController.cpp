#include "pch.h"

using namespace System;
using namespace NetLibrary;

int main(array<System::String^>^ args)
{

	Test^ test = gcnew Test();
	auto result = test->GetInfo();
	using namespace std;
	string str;
	ConvertToString(result, str);//转换Net String格式为C++ string
	cout << "从Net获取的信息为：" << str << endl;
	result = test->SetInfo("输入1a");
	ConvertToString(result, str);
	cout << str << endl;
	return 0;
}
