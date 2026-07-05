// Complete Guide to C++ Programming Foundations
// Exercise 06_05
// Overloading Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

// Function to get the speed of a player
int getSpeed(int distance, int time){
    return distance / time;
}

// overload function to get speed when distance is not provided
int getSpeed(double time) {
    return static_cast<int>(100 / time);
}

// overload function to get speed in a specific format
std::string getSpeed(int distance, int time, std::string unit) {
    float speed = static_cast<float> (distance)/time;
    return std::to_string(speed) + " " + unit;
}

int main(){
    int speedInt;
    std::string speedStr;

    speedInt = getSpeed(200, 4);
    std::cout << "Speed (int): " << speedInt << std::endl;
    
    speedInt = getSpeed(3.5);
    std::cout << "Speed (default distance): " << speedInt << std::endl;

    speedStr = getSpeed(277, 6, "metres per second");
    std::cout << "Speed (string output): " << speedStr << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
