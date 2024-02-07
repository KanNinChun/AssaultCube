#include "Memory.h"
#define DEBUG

int main()
{
	procID = GetProcessID(L"ac_client.exe");
	clientAddress = GetModuleBaseAddress(L"ac_client.exe");

	#ifdef DEBUG
		std::cout << "[+]Assault Cube PID: " << procID << std::endl;
		std::cout << "[+]Assault Cube Client Base Address: " << "0x" << std::hex << clientAddress << std::endl;
		std::cout << "[+]Build Date: " << build_date << std::endl;
	#endif // DEBUG

	std::cin.get();
	return 0;
}