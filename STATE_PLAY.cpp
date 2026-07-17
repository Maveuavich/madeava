#include "Include.def.7.h"
#include "define_ENEMIES.h"

void play_coordsfor(int x, int y);
void battle_screenfor();

void ENEMY_ENCOUNTERS(int x, int y);

void PLAYER_STATS() {
	int HEALTH{100};
	int BASE_DAMAGE{10};
	int EVASION{};
	int ARMOR{};
}

void BATTLE_SCREEN(int HEALTH, int ATTACK) {
	battle_screenfor();
}

void ENEMY_ENCOUNTERS(int x, int y) {

	if (x == 4 && y == 6)
		gaybolbazor();

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
