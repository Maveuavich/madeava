#include "Include.def.7.h"

void ENEMY_ENCOUNTERS(int x, int y);

void PLAY_COORDINATES(int x, int y) {
	std::cerr << "\n\n\n" << "player coordinates:   x:   " << x << "      y:     " << y;

	std::string play_Input;
	std::cin >> play_Input;
	//int x{ 0 }, y{ 0 };

	if (play_Input == "w")
		++y;
	if (play_Input == "s")
		--y;
	if (play_Input == "a")
		--x;
	if (play_Input == "d")
		++x;
	std::cerr << x << "    " << y;
	PLAY_COORDINATES(x, y);
	ENEMY_ENCOUNTERS(x, y);
}

void ENEMY_ENCOUNTERS(int x, int y) {

}
