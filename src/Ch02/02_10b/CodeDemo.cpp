// Complete Guide to C++ Programming Foundations
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    float target_x;
    int32_t sprite_x;
    uint32_t player_x;

    target_x = -123.45; // is a float
    sprite_x = target_x; // cast to a signed int
    player_x = sprite_x; // cast to an unsigned int

    // the point to note here is that all of these values have the same
    // binary representation, but depending on their type, determines how
    // this is actually interpreted, you will note the 3rd print statement
    // leads to an overflow error, where as the 4th does not because we 
    // cast specifically to a signed int rather than unsigned
    std::cout << target_x << std::endl;
    std::cout << sprite_x << std::endl;
    std::cout << player_x << std::endl;
    std::cout << static_cast<int32_t>(player_x) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
