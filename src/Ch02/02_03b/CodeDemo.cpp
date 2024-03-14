// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

int a, b = 5;

#include <iostream>

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "my_flag is " << my_flag << std::endl;

    std::cout << "a + b is " << a + b << std::endl;
    
    std::cout << "b - a is " << b - a << std::endl;

    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned)" << positive << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
