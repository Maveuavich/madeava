#include "Include.def.7.h"
#include "define.GAMESTATE.variables.h"

int MAIN_MENUS();

int PLAY_STATE() {
	return NULL;
}

int GAMESTATE() {
	int STATE;
	STATE = MAIN_MENUS();

	if (STATE == PLAY_GAME)
		STATE = PLAY_STATE();
	if (STATE == EXIT_GAME)
		return EXIT_GAME;


}