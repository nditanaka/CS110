#include <stdio.h>

int main() {
    // A variable is a name associated with a value. Variables are stored in
    // memory (RAM).

    // This declares the variable x to be a variable that can store integers.
    // A variable's type cannot change within its lifetime.
    int x;
    // This initializes the variable x to have the value 5. Before x is
    // initialized, its value is unknown.
    x = 5;

    // Here y is declared and initialized on the same line. This is usually
    // the better practice.
    int y = -17;

    printf("The value of x is %i, the value of y is %i\n", x, y);

    int z;

    printf("z is uninitialized. Its value happens to be %i\n", z);

    // The types float and double can be used to store real numbers (though
    // often they can only store an approximation). double is a larger types
    // which will give you more accurate approximations.
    double f = 5.3;

    printf("f is %f\n", f);

    printf("Enter a value for z: ");

    // To read a value from the user, you can use scanf()
    scanf("%i", &z);

    printf("z is now %i\n", z);

    return 0;
}
