// Complete Guide to C++ Programming Foundations
// Exercise 05_04
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> playerScores = {12, 25, 31, 47, 58};
    
    std::vector<int>::iterator scorePtr = playerScores.begin();

    // while loop where scorePtr starts as a pointer to the first element in the vector
    // each loop we push the pointer to the next object in the vector
    // once the pointer hits the final element in the vector then the loop terminates
    // note the `*` as we need to dereference the pointer
    while (scorePtr != playerScores.end()) {
        std::cout << *scorePtr << " ";
        scorePtr = next(scorePtr, 1);
    }
    std::cout << std::endl;

    int i = 0;

    // a do while loop forces the code within the loop to be executed pnce no matter what
    // here we access the elements of the vector with an index and we increment the index each loop
    do {
        std::cout << playerScores[i] << " ";
        i++;
    } while (i < playerScores.size());
    
    std::cout << std::endl << std::endl;
    return (0);
}
