#pragma once
#include "include.h"

struct vector3
{
	float x, y, z;
};

namespace Local {
	DWORD get_LocalPlayer();
	int get_Health();
	int get_Armor();
	int get_AARD_ammo();
	int get_Mtp57_ammo();
	int get_Frags();
	int get_Deaths();
	vector3 get_feetpos();
	vector3 get_camerapos();
}

namespace Entity {
	DWORD getEntityList();
}
