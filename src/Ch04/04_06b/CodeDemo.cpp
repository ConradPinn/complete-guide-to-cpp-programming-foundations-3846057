// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> checkpoints = {"start", "forest", "castle"};

    // push back is the equivalent of python .append()
    checkpoints.push_back("cave");
    checkpoints.push_back("finish");

    for (int i; i < checkpoints.size(); i++) {
        // we can change individual indexes in the vector
        if (i == 2) {
            checkpoints[i] = "dark castle";
        }
        
        std::cout << checkpoints[i] << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    return 0;
}
