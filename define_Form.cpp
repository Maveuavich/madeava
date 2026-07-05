#include "Include.def.7.h"

void wo(std::string uselimp) {
	std::cerr << uselimp;
}

void sa(int uselimp) {
	for (int form{ 0 }; form < uselimp; ++form)
		std::cerr << ' ';
}

void nl(int uselimp) {
	for (int form{ 0 }; form < uselimp; ++form)
		std::cerr << '\n';
}

void al(int uselimp) {
	for (int form{ 0 }; form < uselimp; ++form)
		std::cerr << '<';
}

void ar(int uselimp) {
	for (int form{ 0 }; form < uselimp; ++form)
		std::cerr << '>';
}

void da(int uselimp) {
	for (int form{ 0 }; form < uselimp; ++form)
		std::cerr << '-';
}

void USE_SELE() {
	nl(5);
	wo("Please select an option");
	sa(4); ar(3); sa(4);
}