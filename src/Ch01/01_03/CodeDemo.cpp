// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main() {
    std::string str;

    std::cout << "What is your name: ";
    std::cin >> str;
    std::cout << "Your name is: " << str;

    std::cout << std::endl << std::endl;
    return 0;
}
