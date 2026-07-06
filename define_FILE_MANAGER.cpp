#include <iostream>
#include <filesystem>
#include <fstream>

#include "Form.h"

int PLAY_STATE();

void fileNewDir(std::string PLAYER_NAME) {
    std::ofstream saveFILE("\\v.proj\\save files\\" + PLAYER_NAME);
    
    saveFILE << "PLAYER NAME:" << "\n\n" << PLAYER_NAME << "\n\n\n" << "PLAYER LEVEL :" << "\n\n" << "0" << "\n\n\n" << "PLAYER COORDINATES :" << "\n\n" << "x 0    y 0" << "\n\n\n" << "COMPANIONS:" << "\n\n\n" << "ITEMS:" <<  "\n\n";

    

    PLAY_STATE();
}

void fileLoadDIR() {
    std::string path = "\\v.proj\\save files";
    for (const auto& entry : std::filesystem::directory_iterator(path))
    
        std::cerr << entry;
  //      std::cerr << entry.path();
        
    PLAY_STATE();
}
