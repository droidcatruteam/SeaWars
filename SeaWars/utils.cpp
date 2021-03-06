#include "pch.h"
#include "utils.h"
#include <algorithm>


void setcolor(unsigned int color, unsigned int background_color) {
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color | background_color * 16 + color);
}