// Complete Guide to C++ Programming Foundations
// Exercise 05_01
// If Statements, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    int score = 1023;
    bool gamePaused = false;
    char action = 'x';

    if (score > 1000) {
        std::cout << "score is over 1000" << std::endl;
    }

    if (score % 2 == 0) {
        std::cout << "score is even" << std::endl;
    } else {
        std::cout << "score is odd" << std::endl;
    }

    std::vector<char> valid_moves = {'w','a','s','d','W','A','S','D',};

    if(std::find(valid_moves.begin(), valid_moves.end(), action) != valid_moves.end()) {
        std::cout << "valid move" << std::endl;
    } else {
        std::cout << "invalid move" << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    return 0;
}
