// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex> // complex number maths

int main(){
    // nested templates, points is a vector of complex numbers and the complex numbers are represented by doubles
    std::vector<std::complex<double>> points;

    // append our complex numbers to the vector
    points.push_back(std::complex<double>(3.5, 4.0));
    points.push_back(std::complex<double>(-2.0, 2.0));
    points.push_back(std::complex<double>(1.3, 2.3));

    // note we are using ->, -> is used to access members of a structure through a pointer, so .begin() and .end() are pointers to specific indexes in our vector, and complex is a struct holding both a real and an imaginary number, hence why the -> is used to dereference the pointer and access the specific part of the struct

    // .begin to get the first vector point, real to get the real part
    std::cout << points.begin()->real() << std::endl;

    // .end points to the end of the vector, this is effectively a marker indicating the end of the vector, hence end - 1 points to the final element of the vector
    std::cout << (points.end() - 1)->imag() << std::endl;

    // prev is an iterator for moving backwards through a sequence, in this case moving 2 back from the end of the vector, hence the second to last position
    std::cout << std::prev(points.end(), 2)->real() << std::endl;

    // note here we use . rather than -> and that is because when using [] notation we get an object, not a pointer
    std::cout << points[2].real() << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
