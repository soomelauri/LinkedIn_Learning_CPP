// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector <cow> cattle;

    cattle.push_back(cow("Jimbo", 2, cow_purpose::meat));
    cattle.push_back(cow("Betsy", 4, cow_purpose::hide));
    cattle.push_back(cow("Tom", 9, cow_purpose::pet));
    cattle.push_back(cow("Colleen", 5, cow_purpose::dairy));

    std::cout << "The first cow is named: " << cattle.begin() ->get_name() << std::endl;
    std::cout << "The second cow is named: " << cattle[1].get_name() << std::endl;
    std::cout << "The second to last cow in named: " << prev(cattle.end(), 2) -> get_name() << std::endl;

    std::cout << "The last cow is named: " << (cattle.end() - 1) -> get_name() << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
