// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

int main(){
    const int number_of_enemies = 4;

    int enemies[number_of_enemies];
    enemies[0] = 10;
    enemies[1] = 15;
    enemies[2] = 20;
    enemies[3] = 25;

    float difficulty[] = {1.0, 2.1, 3.2, 4.7};

    for (int i = 0; i < number_of_enemies; i++) {
        std::cout << enemies[i] << std::endl;
        std::cout << difficulty[i] << std::endl;
        std::cout << std::endl << std::endl;
    }
    
    return 0;
}
