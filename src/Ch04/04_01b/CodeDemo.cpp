// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 1025;
    bool flag = false;
    char letter = 'f';

    if (a > 1000)
        std::cout << "Warning! a is greater than 1000! " << std::endl;

    if (a % 2)
        std::cout << "a is odd" << std::endl;
    else
        std::cout << "a is even" << std::endl;

    std::cout << "The letter is ";
    if (letter != 'a' && letter != 'e' && letter != 'o' && letter != 'u')
        std::cout << "not ";
    std::cout << " a vowel." << std::endl;

    if (flag)
        std::cout << "The flag is true." << std::endl;
    else
        std::cout << "The flag is false." << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
