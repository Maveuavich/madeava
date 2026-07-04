
#include <iomanip>
#include <cstdint>
#include <iostream>
#include <string>

const int BACK_RTURN{ 5 };

const int PLAY_GAME{ 67 };
const int EXIT_GAME{ 69 };
const int RETURN_TO_MENUS{ 6769 };

int MAIN_MENUS();

int NEW_GAME_MENUS() {
	std::string Player_Name;
	std::cin >> Player_Name;
}

int GAME_FILE_MENUS() {
	int user_Input;
	std::cin >> user_Input;

	if (user_Input == 1)
		user_Input = NEW_GAME_MENUS();

	if (user_Input == BACK_RTURN)
		return RETURN_TO_MENUS;
}

int PLAY_MENUS() {
	int user_Input;
	std::cin >> user_Input;

	if (user_Input == 1)
		user_Input = GAME_FILE_MENUS();
	if (user_Input == BACK_RTURN)
		return RETURN_TO_MENUS;

	if (user_Input == RETURN_TO_MENUS)
		PLAY_MENUS();
}

int OPTIONS_MENUS() {
	int user_Input;
	std::cin >> user_Input;

	if (user_Input == BACK_RTURN)
		return RETURN_TO_MENUS;
}

void main_menusfor() {
	std::cerr << "main menus" << "\n\n\n\n" << ">>>>>>>>>" << "        " << "userinput >>" << "    ";
	
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


int main() {
	return GAMESTATE();
}