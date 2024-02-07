#include "getValue.h"
#include "Memory.h"
#include "offsets.h"

using namespace offset;

DWORD Local::get_LocalPlayer()
{
	return clientAddress + offset::localPlayer;
}

int Local::get_Health()
{
	return clientAddress + health;
}

int Local::get_Armor()
{
	return clientAddress + armor;
}

int Local::get_AARD_ammo()
{
	return clientAddress + a_ard_ammo;
}

int Local::get_Mtp57_ammo()
{
	return clientAddress + m_mtp57_ammo;
}

int Local::get_Frags()
{
	return clientAddress + frags;
}

int Local::get_Deaths()
{
	return clientAddress + deaths;
}

vector3 Local::get_feetpos()
{
	return vector3(clientAddress + feetpos_x, clientAddress + feetpos_y, clientAddress + feetpos_z);
}

vector3 Local::get_camerapos()
{
	return vector3(clientAddress + camerapos_x, clientAddress + camerapos_y, clientAddress + camerapos_z);
}

DWORD Entity::getEntityList()
{
	return clientAddress + entityList;
}
