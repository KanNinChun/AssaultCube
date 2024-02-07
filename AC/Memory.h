#pragma once

#include "include.h"

extern DWORD procID = 0;
extern HANDLE hProc = NULL;

DWORD clientAddress{0};

extern DWORD GetProcessID(const wchar_t* processName);

extern DWORD GetModuleBaseAddress(const wchar_t* moduleName);

class Memory
{
public:
	template<class dataType>
	void wpm(DWORD addressToWrite, dataType ValueToWrite)
	{

		WriteProcessMemory(hProc, (LPVOID)addressToWrite, &ValueToWrite, sizeof(dataType), 0);
	}

	template<class dataType>
	dataType rpm(DWORD addressToRead)
	{
		dataType buffer;
		ReadProcessMemory(hProc, (LPVOID)addressToRead, &buffer, sizeof(dataType), 0);
		return buffer;
	}

};

Memory mem;