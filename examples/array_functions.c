#include <stdio.h>


// The const keyword is used so that the function cannot change the values
// of the array's elements. If it does, the code will not compile.
void print_array(const int array[], size_t size);
void increment_elements(int to_increment[], size_t size, int amount);
int max_value(const int array[], size_t size);
void test_array_functions(int array[], size_t array_size);

int main() {
    int array_1[] = {1, 2, 3, 4};
    test_array_functions(array_1, 4);

    int array_2[] = {4, 3, 2, 1};
    test_array_functions(array_2, 4);

    int array_3[] = {1, 2, 500, -2, 40};
    test_array_functions(array_3, 5);

    return 0;
}

void test_array_functions(int array[], size_t array_size) {
    print_array(array, array_size);
    printf("\n");

    increment_elements(array, array_size, 1);
    printf("All elements have been incremented by 1:\n");
    print_array(array, array_size);
    printf("\n");

    printf("The largest element in ");
    print_array(array, array_size);
    printf(" is %i\n", max_value(array, array_size));

    printf("\n");
}

int max_value(const int array[], size_t size) {
    int max = array[0];
    for(size_t i = 1; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }
    return max;
}


void increment_elements(int to_increment[], size_t size, int amount) {
    for(size_t i = 0; i < size; i++) {
        to_increment[i] += amount;
    }
}


void print_array(const int array[], size_t size) {
    printf("{");
    for(size_t i = 0; i < size; i++) {
        printf("%i", array[i]);
        if(i < size - 1) {
            printf(", ");
        }
    }
    printf("}");
}
