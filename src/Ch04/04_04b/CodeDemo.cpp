// Complete Guide to C++ Programming Foundations
// Exercise 04_04
// Using Objects with Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <chrono> // classes to keep track of time

// Type aliases for chrono classes
using Clock = std::chrono::system_clock;
using TimePoint = std::chrono::time_point<Clock>;
using Duration = std::chrono::duration<double>;

int main(){
    TimePoint *start, *end; // asterisks mean that these are now pointers
    Duration *elapsed_seconds = new Duration(); // elapsed second is a pointer hence new key word is required to allocate memory for the sotred Duration, new allocates memory in cpp
    std::string input;

    start = new TimePoint(Clock::now()); // same as above, new is required to allocate memory to start

    std::cout << "Type 'start' as quickly as you can and hit ENTER: " << std::flush;
    std::cin >> input;

    end = new TimePoint(Clock::now());
    *elapsed_seconds = *end - *start; // all variables here are pointers

    // there are 2 different ways of accessing the count of the pointer
    std::cout << "Reaction time: " << (*elapsed_seconds).count() << "s" << std::endl;
    std::cout << "Reaction time: " << elapsed_seconds->count() << "s" << std::endl;

    // we need to delete these now as we are dynamically assigning memory on the fly and delete deallocates memory in cpp
    delete start;
    delete end;
    delete elapsed_seconds;
    
    std::cout << std::endl << std::endl;
    return 0;
}
