// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string str;

    std::cout << "Who are you?" << std::endl;
    std::cin >> str;
    std::cout << std::endl;
    std::cout << "Hello there " << str << std::flush;

    std::cout << std::endl << std::endl;
    return (0);
}
