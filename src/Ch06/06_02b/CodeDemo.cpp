// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

int square(int x) {
    return x * x;
}

/* There are two overloads of `swap` here:
   - one takes pointers to int
   - one takes references to int

   Which overload is called depends on the arguments:
   - `swap(a, b)` calls the reference version
   - `swap(&a, &b)` calls the pointer version
*/

// Takes two pointers to int.
// The caller must pass addresses, for example `swap(&a, &b)`.
void swap(int* x, int* y) {
    // `x` and `y` are pointers, so `*x` and `*y` are the actual ints being swapped.
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Takes two int references.
// `x` and `y` are aliases for the caller's variables.
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

/*
    - A pointer stores the address of an object.
      Example:
          int x = 10;
          int* xPtr = &x;
      Here, `xPtr` holds the address of `x`, and `*xPtr` accesses the value of `x`.

    - A reference is another name for an existing object.
      Example:
          int y = 10;
          int& yRef = y;
      Here, `yRef` and `y` refer to the same object, so changing one changes the other.

    - This is different from:
          int y = 10;
          int yCopy = y;
      In that case, `yCopy` is a separate int initialized with the same value.
      If `y` changes later, `yCopy` does not.
      e.g. if we do
          y++
      Now y is equal to 11, but yCopy is equal to 10 still
*/

int main(){
    int a = 9, b;
    b = square(a);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(&a, &b); // uses the pointer version of swap
    std::cout << "a = " << a << ", b = " << b << std::endl;
    swap(a, b); // uses the reference version of swap
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
