#include <fstream>
#include <filesystem>
#include <iostream>

void fileLoadDIR() {
    std::string path = "/path/to/directory";
    for (const auto& entry : std::filesystem::directory_iterator(path))
        wo(entry.path());
}
