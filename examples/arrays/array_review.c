#include <stdio.h>

int negative_count(int array[], size_t size);

int main() {
    int array[] = {1, -1, 3, 4};
    size_t size = 4;

    printf("There is/are %i negative value(s)\n", negative_count(array, size));

    return 0;
}

int negative_count(int array[], size_t size) {
    int count = 0;

    for(size_t i = 0; i < size; i++) {
        if(array[i] < 0) {
            count++;
        }
    }

    return count;
}
