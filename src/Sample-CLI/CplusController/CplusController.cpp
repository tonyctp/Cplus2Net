#include "pch.h"

using namespace System;
using namespace NetLibrary;

int main(array<System::String^>^ args)
{

	Test^ test = gcnew Test();
	auto result = test->GetInfo();
	using namespace std;
	string str;
	ConvertToString(result, str);//ת��Net String��ʽΪC++ string
	cout << "��Net��ȡ����ϢΪ��" << str << endl;
	result = test->SetInfo("����1a");
	ConvertToString(result, str);
	cout << str << endl;
	return 0;
}
