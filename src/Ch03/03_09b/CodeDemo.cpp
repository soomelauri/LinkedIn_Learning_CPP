// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector <int> primes;

    primes.push_back(2);
    primes.push_back(3);
    primes.push_back(5);
    primes.push_back(7);
    primes.push_back(11);

    std::cout << "There are: " << primes.size() << " elements in the vector." << std::endl;

    std::cout << std::endl << std::endl;

    std::cout << "The third element in the vector is: " << primes[2] << std::endl;

    primes[2] = 17;
    std::cout << "The third element in the vector is: " << primes[2] << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
