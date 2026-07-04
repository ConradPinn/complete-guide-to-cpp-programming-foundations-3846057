// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_character {
    std::string name;
    int level;
    character_role role;
};

int main(){

    game_character tony;
    tony.name = "Tony";
    tony.level = 10;
    tony.role = character_role::sidekick;

    std::cout << tony.name << std::endl;
    std::cout << tony.level << std::endl;
    std::cout << (int) tony.role << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
