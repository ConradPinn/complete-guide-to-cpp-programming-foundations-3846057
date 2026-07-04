// Complete Guide to C++ Programming Foundations
// Exercise 04_09
// C Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring> // c standard library for strings

int main(){
    const size_t LENGTH = 50;
    char racer1[] = "speedy"; // character array with no specified length
    char racer2[LENGTH]; // we automatically reserve 50 bytes in memory (remember there is a null character at the end which counts as a character)
    char raceResult[LENGTH * 2];

    std::strncpy(racer2, "lightning", sizeof(racer2) - 1);
    racer2[sizeof(racer2) - 1] = '\0'; // terminating character to put at the end of racer2

    strncpy(raceResult, "the winner is ", sizeof(raceResult) - 1);
    raceResult[sizeof(raceResult) - 1] = '\0'; // terminating character

    // strncat is string concatenation i.e. raceResult + racer1
    // sizeof() function gets the size of the buffer - raceResult was initialised with a buffer of 100 hence this is what sizeof() returns
    // strlen() gets the length of the string i.e. "the winner is " = 14
    strncat(raceResult, racer1, sizeof(raceResult) - strlen(raceResult) - 1);

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;
    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
