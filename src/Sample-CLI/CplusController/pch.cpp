// pch.cpp: 与预编译标头对应的源文件

#include "pch.h"

// 当使用预编译的头时，需要使用此源文件，编译才能成功。

void ConvertToString(System::String^ str, std::string& text)
{
    char* p = (char*)(int)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(str);
    text = p;
    System::Runtime::InteropServices::Marshal::FreeHGlobal((System::IntPtr)p);
}
