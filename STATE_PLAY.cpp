#include "Include.def.7.h"

void ENEMY_ENCOUNTERS(int x, int y);

void PLAY_COORDINATES() {
	std::string play_Input;
	std::cin >> play_Input;
	int x, y;

	if (play_Input == "w")
		++y;
	if (play_Input == "s")
		--y;
	if (play_Input == "a")
		--x;
	if (play_Input == "d")
		++x;
	std::cerr << x << "    " << y;
	ENEMY_ENCOUNTERS(x, y);
}

void ENEMY_ENCOUNTERS(int x, int y) {

}