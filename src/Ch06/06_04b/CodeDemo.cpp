// Complete Guide to C++ Programming Foundations
// Exercise 06_04
// Writing Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

std::string getPlayerName() {
    return "Alex";
}

int calculateScore(int baseScore, int multiplier) {
    return baseScore * multiplier;
}

// const is useful here as it tells us the function will not mutate either value
// references (&) are useful here as the function does not have to copy either variable when called
void displayScore(const std::string& playerName, const int& score) {
    std::cout << playerName << " scored " << score << " points." << std::endl;
}

int main(){
    std::string playerName = getPlayerName();
    int score = calculateScore(75, 2);

    displayScore(playerName, score);
    
    std::cout << std::endl << std::endl;
    return 0;
}
