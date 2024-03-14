// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define DEBUG
#define CAPACITY 5000

int main(){
    int32_t large = CAPACITY;
    uint8_t small = 37;

#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif

    large += small;

    std::cout << "The value of large is " << large << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
