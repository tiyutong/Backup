// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� MYDLL_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// MYDLL_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef MYDLL_EXPORTS
#define MYDLL_API __declspec(dllexport)
#else
#define MYDLL_API __declspec(dllimport)
#endif

// �����Ǵ� MyDll.dll ������
class MYDLL_API CMyDll {
public:
	CMyDll(void);
	// TODO:  �ڴ�������ķ�����
};

extern MYDLL_API int nMyDll;

extern "C"	//��C#����ʱ��Ҫ����
{
	MYDLL_API int WINAPI  MySum(int a, int b);

	MYDLL_API void WINAPI  MySum2();
}
