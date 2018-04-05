#include <stdio.h>

// Defined constants are typically in all uppercase. All occurances of PI in
// the code will be replaced with 3.1415
#define PI 3.1415

//#define DEBUG

int main() {
    double radius = 10.5;

    double area = radius * radius * PI;

    printf("A circule with radius %lf is approximately %lf\n", radius, area);

    #ifdef DEBUG
    printf("Debugging is enabled\n");
    #endif

    return 0;
}
