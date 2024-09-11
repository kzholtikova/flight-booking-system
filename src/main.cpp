#include <iostream>
#include "../include/system.h"
#include "../include/fileReader.h"

int main() {
    System system;

    try {
        FileReader::readConfig("../config.txt", system);
    } catch (const std::invalid_argument& e) {
        std::cerr << "Error: " << e.what() << "\n";
        std::exit(EXIT_FAILURE);
    }
}