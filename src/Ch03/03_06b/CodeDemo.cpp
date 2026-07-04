// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

// these are directives, equivalent to python module imports
// cout is a function that comes from the iostream library
#include <iostream>
// cstdint provides richer data types e.g. int32_t and uint8_t
#include <cstdint>

// #define can tell the pre processor to replace a name with a value
// before compilation - the below tells the pre processor, every time
// it sees an instance of MAX_AMMO, replace it with 500, it is sort
// of like defining a const except this is not a variable
#define MAX_AMMO 500

// if the below is defined then DEBUG will be compiled, if not it will
// be skipped
#define DEBUG

int main(){

    // this code says, if DEBUG is defined, include this code in
    // compilation if DEBUG is not defined, then don't include
    #ifdef DEBUG
        std::cout << "Debugging..." << std::endl;
    #endif

    int32_t ammo = MAX_AMMO; // int 32 bit type
    uint8_t health_items = 5; // unsigned int 8 bit type

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
