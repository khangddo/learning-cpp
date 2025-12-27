// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>

#define CAPACITY 5000
#define DEBUG 300
int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "DEBUG is defined!" << std::endl;
#endif

    large += small;
    std::cout << "The large integer is: " << large << std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
