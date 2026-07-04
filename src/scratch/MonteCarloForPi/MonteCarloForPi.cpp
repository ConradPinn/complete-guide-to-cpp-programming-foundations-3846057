#include <iostream>
#include <cmath>

int main(){

    int n = 1000000; // number of sims

    int outside_circle_count = 0;
    int inside_circle_count = 0;

    float circle_radius = 1;
    float circle_diam = circle_radius * 2;
    float square_area = circle_diam * circle_diam;

    srand(static_cast<unsigned>(time(nullptr))); // create a random seed for rand()
    for (int i = 0; i < n; i++) {

        // note that (float) has to be called before rand() as rand() will otherwise
        // output an integer which will lead to rand_<coord> being an int
        float rand_x = (((float)rand() / RAND_MAX) * circle_diam) - circle_radius;
        float rand_y = (((float)rand() / RAND_MAX) * circle_diam) - circle_radius;

        float hypotenuse = sqrt(
            (rand_x * rand_x) + (rand_y * rand_y)
        );

        if (hypotenuse > circle_radius) {
            outside_circle_count++;
        } else {
            inside_circle_count++;
        }
    }

    // note float needs to be called for the fraction division as both
    // inside_circle_count and n are int, hence the fraction would lead
    // to an int without the float call
    float circle_area = square_area * ((float)inside_circle_count/n);
    float estimated_pi = circle_area/(circle_radius * circle_radius);

    std::cout << std::endl;
    std::cout << estimated_pi;
    std::cout << std::endl;

    return 0;
}