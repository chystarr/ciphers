#include <iostream>
#include <string>

#include "caesar.cpp"
// #include "vigenere.cpp"
// #include "atbash.cpp"

int main() {
    int cipher;
    std::string text;

    std::cout << "Please enter the text you want to encrypt or decrypt." << std::endl;
    std::getline(std::cin, text);

    std::cout << "Please select the type of cipher you want to use." << std::endl;
    std::cout << "1. Caesar Cipher (Encrypt)" << std::endl;
    std::cout << "2. Caesar Cipher (Decrypt)" << std::endl;
    std::cout << "3. Vigenère Cipher (Encrypt)" << std::endl;
    std::cout << "4. Vigenère Cipher (Decrypt)" << std::endl;
    std::cin >> cipher;
    // add exception handling for invalid cipher number being selected (unless switch statement is fine?)?

    std::string result;

    switch(cipher) {
    case 1:
        result = caesarEncrypt(text);
        break;
    case 2:
        result = caesarDecrypt(text);
        break;
    case 3:
        // vigenereEncrypt(1);
        // encryption returns ciphertext
        break;
    case 4:
        // vigenereDecrypt(2);
        // decryption returns plaintext
        break;
    default:
        std::cout << "Invalid option selected.";
    }

    std::cout << "Result: " << result << std::endl;
}