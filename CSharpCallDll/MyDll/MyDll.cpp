// MyDll.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "MyDll.h"


// ���ǵ���������һ��ʾ��
MYDLL_API int nMyDll=0;

// ���ǵ���������һ��ʾ����
MYDLL_API int WINAPI  MySum(int a, int b)
{
    return a + b;
}

MYDLL_API void WINAPI MySum2()
{
	
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� MyDll.h
CMyDll::CMyDll()
{
    return;
}
