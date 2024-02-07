#pragma once
#include <cstddef>

namespace offset {
	constexpr ptrdiff_t localPlayer		= 0x10F4F4;
	constexpr ptrdiff_t entityList		= 0x10F4F8;
	constexpr ptrdiff_t health			= 0xF8;
	constexpr ptrdiff_t armor			= 0xFC;
	constexpr ptrdiff_t a_ard_ammo		= 0x148;
	constexpr ptrdiff_t m_mtp57_ammo	= 0x150;
	constexpr ptrdiff_t isJumping		= 0x68;
	constexpr ptrdiff_t feetpos_x		= 0x34;
	constexpr ptrdiff_t feetpos_y		= 0x38;
	constexpr ptrdiff_t feetpos_z		= 0x3c;
	constexpr ptrdiff_t camerapos_x		= 0x4;
	constexpr ptrdiff_t camerapos_y		= 0x8;
	constexpr ptrdiff_t camerapos_z		= 0xc;
	constexpr ptrdiff_t frags			= 0x1F8;
	constexpr ptrdiff_t deaths			= 0x204;
}