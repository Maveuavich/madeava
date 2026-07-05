#include "Form.h"

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