#ifndef DLLTEST_H
#define DLLTEST_H

#define dll_export

#ifdef dll_export
	#define CALL_Dll extern "C" __declspec(dllexport)  // 此时为生成dll，为保证兼容，限制以C的方式
#else
	#define CALL_Dll extern "C" __declspec(dllimport)  // 此时为导入dll，为保证兼容，限制以C的方式
#endif 

CALL_Dll int sum(const int x, const int y);
CALL_Dll int sub(const int x, const int y);

#endif