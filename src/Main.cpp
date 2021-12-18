#include "Generator.h"
#include <iostream>

int main() {
    int length;

    std::cin >> length;
    
    std::cout << generatePW(length) << std::endl;

    return 0;
}