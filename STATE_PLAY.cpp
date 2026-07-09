#include "Include.def.7.h"
#include "define_ENEMIES.h"

void play_coordsfor(int x, int y);

void ENEMY_ENCOUNTERS(int x, int y);

void PLAYER_STATS() {
	int HEALTH{};
	int BASE_DAMAGE{};
	int EVASION{};
	int ARMOR{};
}

void BATTLE_SCREEN(int HEALTH, int ATTACK) {

}

void ENEMY_ENCOUNTERS(int x, int y) {

	if (x == 4 && y == 6)
		return gaybolbazor();

}

void PLAY_COORDINATES(int x, int y) {
	play_coordsfor(x, y);

	std::string play_Input;
	std::cin >> play_Input;

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
