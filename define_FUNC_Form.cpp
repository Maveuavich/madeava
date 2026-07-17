#include "Form.h"

void play_coordsfor(int x, int y) {
	nl(3); wo("player coodinates:"); sa(3); wo("x:"); sa(3); fo(x); sa(4); wo("y:"); sa(3); fo(y); nl(2); wo("Press W to move up  ::  Press S to move down   ::   Press A to move left   ::   Press D to move right");
	USE_SELE();
}

void battle_screenfor() {
	nl(3); wo("You encountered a monster. You ran into:"); sa(3);
}

void options_menusfor() {
	nl(3); al(43); sa(12); wo("OPTIONS MENUS"); sa(12); ar(43); nl(5); sa(41); wo("dafuq kind of settings youz gonna change"); nl(3); sa(55); wo("5. Back");
	USE_SELE();
}

void newgame_menusfor() {
	nl(3); al(43); sa(12); wo("NEW GAME MENUS"); sa(12); ar(43); nl(3); sa(42); wo("Enter Player Name or Press 5 to go Back");
	USE_SELE();
}

void loadgame_menusfor() {
	nl(3); al(43); sa(12); wo("LOAD GAME MENUS"); sa(12); ar(43); nl(3); sa(42); wo("list. press 5 to go back");
	USE_SELE();
}

void play_menusfor() {
	nl(3); al(43); sa(12); wo("PLAY MENUS"); sa(12); ar(43); nl(5); sa(55); wo("1. New Game"); nl(3); sa(55); wo("2. Load Game"); nl(3); sa(55); wo("5. Back");
	USE_SELE();
}

void main_menusfor() {
	al(43); sa(12); wo("MAIN MENUS"); sa(12); ar(43); nl(5); sa(55); wo("1. Play"); nl(3); sa(55); wo("2. Options"); nl(3); sa(55); wo("5. Exit");
	USE_SELE();

}