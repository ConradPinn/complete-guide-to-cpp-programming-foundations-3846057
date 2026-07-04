// Complete Guide to C++ Programming Foundations
// Exercise 04_10
// The String Class, by Eduardo Corpeño 

#include <iostream>
#include <string> // c++ string class

// string from c++ is a lot easier to use that cstring because it handles memory management for you
// using cstring means that we have to be concerned with managing the memory of the strings being used

int main(){
    std::string racer1 = "Speedy";
    std::string racer2 = "lightning";
    std::string raceResult;

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    // this is operator overloading, for numbers + means addition, but for strings, + means concatenation, this is how we can concat in c++
    raceResult = "And the winner is " + racer1;

    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
