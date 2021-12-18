#include "Generator.h"

std::string generatePW(int length) {
    //dynamic type beat
    char *pw = new char[length + 1];

    std::string capsLetters = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string noCLetters  = "abcdefghijklmnopqrstuvwxyz";
    std::string digits      = "0123456789";
    std::string specChars   = "!\"#%&/()=?@${[]}+,.-;:_<>|";

    std::string availableChars = capsLetters + noCLetters + digits + specChars;

    srand(time(nullptr));

    pw[0] = (capsLetters + noCLetters).at( rand() % (capsLetters + noCLetters).length() );

    for (int i = 1; i < length; i++) {
        *(pw + i) = availableChars.at( rand() % availableChars.length() );
    }
    
    pw[length] = '\0';

    return pw;
}