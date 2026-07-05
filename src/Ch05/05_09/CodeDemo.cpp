// Complete Guide to C++ Programming Foundations
// Challenge 05_09
// Calculate Resource Cost, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>

struct Resource{
    std::string name;
    double baseCost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

double CalculateTotalCost(std::vector<Resource> resources){
    double result = 0.0;
    
    for (int i = 0; i < resources.size(); i++) {

        float tax_rate;
        switch (resources[i].type) {
            case 'B':
                tax_rate = 1.05;
                break;
            case 'L':
                tax_rate = 1.15;
                break;
            case 'E':
                tax_rate = 1.0;
                break;
        }

        result += (resources[i].baseCost * tax_rate);
    }
    
    return result;
}

int main(){
    
    // Example 1 resources
    std::vector<Resource> resources = {
        {"Wood", 125.0, 'B'},
        {"Gold", 200.0, 'L'},
        {"Water", 50.0, 'E'}
    };

    double learnerResult = CalculateTotalCost(resources);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
