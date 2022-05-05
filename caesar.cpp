#include <iostream>
#include <string>
#include <cctype>

std::string caesarEncrypt(std::string text) {
    int shift;
    std::cout << "Enter the shift: " << std::endl;
    std::cin >> shift;
    for (int i = 0; i < text.length(); i++) {
        // The ASCII codes for characters A through Z are 65 through 90
        if (text[i] >= 65 &&  text[i] <= 90) {
            text[i] = (text[i] + shift - 65) % 26 + 65;
        }
        // The ASCII codes for characters a through z are 97 through 122
        else if (text[i] >= 97 && text[i] <= 122) {
            text[i] = (text[i] + shift - 97) % 26 + 97;
        }
    }
    return text;
}

std::string caesarDecrypt(std::string text) {
    int shift;
    std::cout << "Enter the shift: " << std::endl;
    std::cin >> shift;
    for (int i = 0; i < text.length(); i++) {
        // The ASCII codes for characters A through Z are 65 through 90
        if (text[i] >= 65 &&  text[i] <= 90) {
            text[i] = (text[i] - shift - 65 + 26) % 26 + 65;
        }
        // The ASCII codes for characters a through z are 97 through 122
        else if (text[i] >= 97 && text[i] <= 122) {
            text[i] = (text[i] - shift - 97 + 26) % 26 + 97;
        }
    }
    return text;
}