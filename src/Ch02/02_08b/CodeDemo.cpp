// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};
enum class song {volume, pitch, sound};

int main(){
    int sound = 11;

    std::cout << (int) asset_type::sound << std::endl; //  1
    std::cout << (int) song::sound << std::endl; // 2
    std::cout << sound << std::endl; // 11

    std::cout << std::endl << std::endl;
    return 0;
}
