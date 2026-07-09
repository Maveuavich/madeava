#include <iostream>
#include <filesystem>
#include <fstream>
#include <string_view>

#include "Form.h"

//int PLAY_STATE();

void PLAY_COORDINATES(int x, int y);

void newgame(std::string PLAYER_NAME) {
    
    std::ifstream saveFILE{ "\\v.proj\\save files\\" + PLAYER_NAME };
    saveFILE.seekg(1, std::ios::beg);
    std::string infoFILE;
    std::getline(saveFILE, infoFILE);
    std::cout << "\n\n\n" << infoFILE << "WHY ISN't THIS WORKING" << "\n\n\n\n";
}

void fileNewDir(std::string PLAYER_NAME) {

    int x{0}, y{0};

    std::ofstream saveFILE{ "\\v.proj\\save files\\" + PLAYER_NAME };
    
    saveFILE << "PLAYER NAME:" << "\n\n" << PLAYER_NAME << "\n\n\n" << "PLAYER LEVEL :" << "\n\n" << "0" << "\n\n\n" << "PLAYER COORDINATES :" << "\n\n" << "x 0    y 0" << "\n\n\n" << "COMPANIONS:" << "\n\n\n" << "ITEMS:" <<  "\n\n";

    newgame(PLAYER_NAME);
    //while (saveFILE >> infoFILE)
    //   std::cout << infoFILE;
    
    PLAY_COORDINATES(x, y);

//   PLAY_STATE();
}

void fileLoadDIR() {
    int num{ 2 };
    int userInput;
    std::string path = "\\v.proj\\save files";
    for (const auto & files : std::filesystem::directory_iterator(path)) {
        std::string filesString{ files.path().string() };
        std::string_view viewFiles{ filesString };
        viewFiles.remove_prefix(19);
        nl(2);
        std::cerr << ++num << ".       " << viewFiles;
        nl(2);
        viewFiles.remove_suffix(19);
        std::cerr << "\n\n\n" << viewFiles;
    }

    USE_SELE();
    std::cin >> userInput;

        
 //   PLAY_STATE();
}
