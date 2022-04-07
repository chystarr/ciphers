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
    std::cout << "(The Caesar and Atbash Ciphers use the same formula for encryption and decryption.)" << std::endl;
    std::cout << "1. Caesar Cipher" << std::endl;
    std::cout << "2. Vigenère Cipher (Encrypt)" << std::endl;
    std::cout << "3. Vigenère Cipher (Decrypt)" << std::endl;
    std::cout << "4. Atbash Cipher" << std::endl;
    std::cin >> cipher;
    // add exception handling for invalid cipher number being selected (unless switch statement is fine?)?

    std::string result;

    switch(cipher) {
    case 1:
        result = caesar(text);
        break;
    case 2:
        // vigenereEncrypt(1);
        // encryption returns ciphertext
        break;
    case 3:
        // vigenereDecrypt(2);
        // decryption returns plaintext
        break;
    case 4:
        // atbash();
        break;
    default:
        std::cout << "Invalid option selected.";
    }

    std::cout << "Result: " << result << std::endl;
}