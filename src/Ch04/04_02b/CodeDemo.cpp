// Complete Guide to C++ Programming Foundations
// Exercise 04_02
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    int a = 37;
    int *ptr;

    ptr = &a;

    // the key points to note are:
    // a is an integer, and it is stored in some memory location (address)
    // ptr points to that location in memory
    // to get the memory location of a variable, we do &<var>
    // if we have a memory location, then doing *<memory location> gives us the value in that location
    // so ptr points to a and *ptr will return the value of a
    // the pointer itself will have its own address 
    std::cout << "             The value of a is " << a << std::endl;
    std::cout << "    ptr is pointing to address " << ptr << std::endl;
    std::cout << "           The address of a is " << &a << std::endl;
    std::cout << "Where ptr is pointing, we have " << *ptr << std::endl;
    std::cout << "         The address of ptr is " << &ptr << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
