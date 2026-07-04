// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

// global variables
int a;
int b = 5;

int main(){

    bool my_flag;
    my_flag = false;

    // note that we do not need to declare the type of a
    // because this was already done in the global scope
    a = 7;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "my_flag = " << my_flag << std::endl;

    my_flag = true;

    std::cout << "my_flag = " << my_flag << std::endl;
    std::cout << "b + a = " << b + a << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
