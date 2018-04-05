#include <stdio.h>

int main() {
    int x = 11;

    // When dividing two integer values, the result is always an integer, and
    // it always rounds down. This is true even if you assign to a float or
    // double because the conversion is done after the division.
    double x_divided_by_2 = x / 2;

    printf("11 divided by 2, as a double: %f\n", x_divided_by_2);

    double x_divided_by_2_point_0 = x / 2.0;

    printf("11 divided by 2.0, as a double: %f\n", x_divided_by_2_point_0);

    // We can also cast a variable to another type by putting the newn type
    // in parenthesis before the variable name. This is a temporary operation.
    double x_divided_by_w_with_casting = (double)x / 2;

    printf("11.0 divided by 2, as a double: %f\n", x_divided_by_2_point_0);

    // Assigning a floating point value to an integer variable rounds down
    int z = 2.3;

    printf("z is %i\n", z);

    // The modulus operator (%) gives you the remainder after integer division
    int remainder = 11 % 2;

    return 0;
}
