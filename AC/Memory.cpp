#include "Memory.h"

DWORD GetProcessID(const wchar_t* processName)
{
	HANDLE hProcessSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

	if (hProcessSnapShot != INVALID_HANDLE_VALUE)
	{
		PROCESSENTRY32 ProcEntry32{};
		ProcEntry32.dwSize = sizeof(ProcEntry32);
	
		HANDLE GetAllAccess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcEntry32.th32ProcessID);
		if (GetAllAccess == INVALID_HANDLE_VALUE)// if can't open  process close snapshot
		{
			CloseHandle(hProcessSnapShot);
			return false;
		}

		if (Process32First(hProcessSnapShot, &ProcEntry32))
		{
			do {
				if (!_wcsicmp(ProcEntry32.szExeFile, processName))
				{
					hProc = GetAllAccess;
					procID = ProcEntry32.th32ProcessID;
					break;
				}
			} while (Process32Next(hProcessSnapShot, &ProcEntry32));
		}
	}

	CloseHandle(hProcessSnapShot);

	if (procID == NULL)
	{
		system("cls"); // Clear the console
		MessageBox(NULL, L"Please Start Assault Cube first", L"Cannot Find the Game", MB_OK | MB_ICONWARNING);
	}

	return procID;
}


DWORD GetModuleBaseAddress(const wchar_t* moduleName)
{
	DWORD moduleBaseAddr = NULL;
	HANDLE hModuleSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, procID);

	if (hModuleSnapshot != INVALID_HANDLE_VALUE)
	{
		MODULEENTRY32 ModuleEnrty32;
		ModuleEnrty32.dwSize = sizeof(ModuleEnrty32);

		if (Module32First(hModuleSnapshot, &ModuleEnrty32))
		{
			do {
				if (!_wcsicmp(ModuleEnrty32.szModule, moduleName))
					clientAddress = (DWORD)ModuleEnrty32.modBaseAddr;
					break;
			} while (Module32Next(hModuleSnapshot, &ModuleEnrty32));
		}
	}

	CloseHandle(hModuleSnapshot);
	
	if (clientAddress == NULL)
	{
		system("cls");
		MessageBox(NULL, L"Can't Take a Snapshot of Module! Please start Program with administrator", L"Cannot find client module", MB_OK | MB_ICONWARNING);
		exit(EXIT_FAILURE);
	}

	return clientAddress;
}