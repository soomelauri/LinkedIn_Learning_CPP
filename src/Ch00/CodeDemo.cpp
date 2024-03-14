// Learning C++ 
// Exercise 00_03
// Using the exercise files on GitHub, by Eduardo Corpeño
// Comments Added

#include <iostream> // Include the standard input / output library

int main(){ // Start the main program execution
    float num_1, num_2, result; // Create three floating point variables

    std::cout << "Enter number 1: " << std::flush; // Places message on the "conveyer belt", then flushes the message
    std::cin >> num_1; // Saves the user input as num_1
    std::cout << "Enter number 2: " << std::flush; // Places the message to be ready, then flushes the message, showing it to the user
    std::cin >> num_2; // Stores the user input as num_2
    
    result = num_1 + num_2; // Adds num_1 and num_2, storing the result
    
    std::cout << "The result of the addition is " << result << std::endl; // Sends the string to the buffer, then sends the result to the buffer, then adds a newline and flushes the message
    
    std::cout << std::endl << std::endl; // Adds 2 newlines and flushes
    return (0); // 
}
