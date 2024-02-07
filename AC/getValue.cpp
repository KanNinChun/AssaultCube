#include "getValue.h"
#include "Memory.h"
#include "offsets.h"

using namespace offset;

DWORD Local::get_LocalPlayer()
{
	return mem.rpm<DWORD>(clientAddress + offset::localPlayer);
}

int Local::get_Health()
{
	return mem.rpm<int>(clientAddress + health);
}

int Local::get_Armor()
{
	return mem.rpm<int>(clientAddress + armor);
}

int Local::get_AARD_ammo()
{
	return mem.rpm<int>(clientAddress + a_ard_ammo);
}

int Local::get_Mtp57_ammo()
{
	return mem.rpm<int>(clientAddress + m_mtp57_ammo);
}

int Local::get_Frags()
{
	return mem.rpm<int>(clientAddress + frags);
}

int Local::get_Deaths()
{
	return mem.rpm<int>(clientAddress + deaths);
}

vector3 Local::get_camerapos()
{
	return vector3(clientAddress + camerapos_x, clientAddress + camerapos_y, clientAddress + camerapos_z);
}

DWORD Entity::getEntityList()
{
	return clientAddress + entityList;
}
