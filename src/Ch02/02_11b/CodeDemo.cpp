// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    int celsius;

    // note the specificity of of the .0 values, the need for this is if 
    // this is not done then the compiler thinks that 5 is an int and 9 is
    // an int and hence 5/9 is cast to an int, but we need it to be a float,
    // so putting the .0 will force 5 and 9 to be interpreted as floats and
    // hence 5/9 becomes a float
    celsius =  (5.0 / 9.0) * (fahrenheit - 32);

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << celsius << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << static_cast<int>(weight) << std::endl;
    std::cout << "Fractional part: " << (int)  ((weight - static_cast<int>(weight)) * 10000) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
