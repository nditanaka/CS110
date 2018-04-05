#include <stdio.h>

int main() {
    // This declares an array of size 3. It can store 3 int values.
    int array[3];

    // Array indexes start at 0. This assigns the value 10 to the first element
    // of the array. An index is an offset from the first element of the array.
    // The first element is 0 elements away from the first element. The second
    // element is 1 element away from the first, so it has index 1, etc.
    array[0] = 10;

    // Like with variables, an uninitialized array has unknown values. This loop
    // will print out 10 first (because array[0] is 10), but the second and
    // third values are unknown.
    for(int i = 0; i < 3; i++) {
        printf("%i\n", array[i]);
    }

    int initialized_array[3] = {1, 2, 3};
    int initialized_without_size[] = {4, 5, 6, 7, 8};
    // If the initialization list is shorter than the array, the rest is filled
    // in with zeros.
    int initialized_to_zeros[10] = {0};
    // This array will be {1, 0, 0, 0}
    int initialized_with_leading_value[4] = {1};

    // Sizes cannot be negative or floating point values
    // int negative_size[-4];
    // int float_size[4.5];

    int hundred_array[100] = {0};

    for(int i = 0; i < 100; i++) {
        hundred_array[i] = i;
    }

    // This accesses elements out of the bounds of the array.
    for(int i = 0; i < 10000; i++) {
        printf("hundred_array[%i] is %i\n", i, hundred_array[i]);
    }

    // Accessing out of bounds elements results in undefined behavior. You
    // either get a garbage value or the program crashes with a segmentation
    // fault.

    return 0;
}
