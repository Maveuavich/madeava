#include "Include.def.7.h"
#include "define.MENUS.Form.h"
#include "define.GAMESTATE.variables.h"

int MAIN_MENUS();

int NEW_GAME_FILE_MENUS() {
	newgame_menusfor();
	std::string user_Input_player_name;
	std::string PLAYER_NAME;
	std::cin >> user_Input_player_name;
	PLAYER_NAME = user_Input_player_name;
	
	if (user_Input_player_name == "5")
		return RETURN_TO_MENUS;
}

int LOAD_GAME_FILE_MENUS() {
	loadgame_menusfor();
	int user_Input;
	std::cin >> user_Input;

	if (user_Input == BACK_RTURN)
		return RETURN_TO_MENUS;
}

int PLAY_MENUS() {
	play_menusfor();
	int user_Input;
	std::cin >> user_Input;

	if (user_Input == 1)
		user_Input = NEW_GAME_FILE_MENUS();

	if (user_Input == 2)
		user_Input = LOAD_GAME_FILE_MENUS();

	if (user_Input == BACK_RTURN)
		return RETURN_TO_MENUS;

	if (user_Input == RETURN_TO_MENUS)
		PLAY_MENUS();
}

int OPTIONS_MENUS() {
	options_menusfor();
	int user_Input;
	std::cin >> user_Input;

	if (user_Input == BACK_RTURN)
		return RETURN_TO_MENUS;
}

int MAIN_MENUS() {
	main_menusfor();

	int user_Input;
	std::cin >> user_Input;

	if (user_Input == 1)
		user_Input = PLAY_MENUS();

	if (user_Input == 2)
		user_Input = OPTIONS_MENUS();

	if (user_Input == RETURN_TO_MENUS)
		MAIN_MENUS();
	if (user_Input == PLAY_GAME)
		return PLAY_GAME;
	if (user_Input == BACK_RTURN)
		return EXIT_GAME;
}