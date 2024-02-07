#include "function.h"
#include "offsets.h"
#include "Memory.h"

void set_Health()
{
	 mem.wpm<int>(Local::get_LocalPlayer() + offset::health, INT_MAX);
}

void set_Armor()
{
	mem.wpm<int>(Local::get_LocalPlayer() + offset::armor, INT_MAX);
}

void set_AARD_ammo()
{
	mem.wpm<int>(Local::get_LocalPlayer() + offset::a_ard_ammo, INT_MAX);
}

void set_Mtp57_ammo()
{
	mem.wpm<int>(Local::get_LocalPlayer() + offset::m_mtp57_ammo, INT_MAX);
}

void set_Frags()
{
	mem.wpm<int>(Local::get_LocalPlayer() + offset::frags, INT_MAX);
}

void set_Deaths()
{
	mem.wpm<int>(Local::get_LocalPlayer() + offset::deaths, 0);
}

//void set_feetpos()
//{
//	mem.wpm<float>(Local::get_LocalPlayer() + offset::feetpos_x, pos1);
//	mem.wpm<float>(Local::get_LocalPlayer() + offset::feetpos_y, pos2);
//	mem.wpm<float>(Local::get_LocalPlayer() + offset::feetpos_z, pos3);
//}
