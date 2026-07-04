
#include <iostream>
#include <string>

const int BACK_RTURN{ 5 };

const int PLAY_GAME{ 67 };
const int EXIT_GAME{ 69 };
const int RETURN_TO_MENUS{ 6769 };

void wo(std::string usainp) {
	std::cerr << usainp;
}

void sa(int usainp) {
	for (int form{ 0 }; form < usainp; ++form)
		std::cerr << ' ';
}

void nl(int usainp) {
	for (int form{ 0 }; form < usainp; ++form)
		std::cerr << '\n';
}

void al(int usainp) {
	for (int form{ 0 }; form < usainp; ++form)
		std::cerr << '<';
}

void ar(int usainp) {
	for (int form{ 0 }; form < usainp; ++form)
		std::cerr << '>';
}

void da(int usainp) {
	for (int form{ 0 }; form < usainp; ++form)
		std::cerr << '-';
}

void PLAY_SELE() {
	nl(5);
	wo("Please select an option");
	sa(4); ar(8); sa(5);
}

int MAIN_MENUS();

int NEW_GAME_MENUS() {
	std::string Player_Name;
	std::cin >> Player_Name;
	return 0;
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
	PLAY_SELE();
	
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
	wo("rummm urmmmmm");
	nl(69);
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