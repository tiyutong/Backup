// MyDll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "MyDll.h"


// 这是导出变量的一个示例
MYDLL_API int nMyDll=0;

// 这是导出函数的一个示例。
MYDLL_API int WINAPI  MySum(int a, int b)
{
    return a + b;
}

MYDLL_API void WINAPI MySum2()
{
	
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 MyDll.h
CMyDll::CMyDll()
{
    return;
}
