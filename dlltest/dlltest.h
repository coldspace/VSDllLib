#ifndef DLLTEST_H
#define DLLTEST_H

#define dll_export

#ifdef dll_export
	#define CALL_Dll extern "C" __declspec(dllexport)  // ��ʱΪ����dll��Ϊ��֤���ݣ�������C�ķ�ʽ
#else
	#define CALL_Dll extern "C" __declspec(dllimport)  // ��ʱΪ����dll��Ϊ��֤���ݣ�������C�ķ�ʽ
#endif 

CALL_Dll int sum(const int x, const int y);
CALL_Dll int sub(const int x, const int y);

#endif