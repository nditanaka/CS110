#include <stdio.h>

// This function simply assigns new_value to the variable pointed to by p.
void change_value(int *p, int new_value);

// This function takes an array argument as a pointer, which works exactly
// the same way it would if the parameter was int array[]. The sum and the
// average are "returned" through pointers.
void array_sum_and_average(int *array, size_t size, int *sum, double *average);

int main() {
    int x = 10;
    // p is a pointer which currently points to x. The value of x can be gotten
    // with *p
    int *p = &x;

    printf("x is %i\n", x);
    printf("*p is %i\n", *p);

    // Now both p2 and p point to x
    int *p2 = p;

    change_value(p, 20);

    printf("x is now %i\n", x);

    change_value(&x, 30);

    printf("x is now %i\n", x);

    int array[] = {1, 2, 3, 4};
    size_t array_size = 4;

    int sum;
    double average;

    array_sum_and_average(array, array_size, &sum, &average);

    printf("The sum is %i and the average is %lf\n", sum, average);

    return 0;
}

void change_value(int *p, int new_value) {
    *p = new_value;
}

void array_sum_and_average(int *array, size_t size, int *sum, double *average) {
    *sum = 0;
    for(int i = 0; i < size; i++) {
        *sum += array[i];
    }

    *average = (double)*sum / size;
}
