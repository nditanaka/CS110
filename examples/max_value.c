#include <stdio.h>

int main() {
    printf("How big is the array? ");
    int size;
    scanf("%i", &size);

    int array[size];

    for(int i = 0; i < size; i++) {
        printf("Enter the next value: ");
        scanf("%i", &array[i]);
    }

    int max = array[0];

    for(int i = 1; i < size; i++) {
        if(array[i] > max) {
            max = array[i];
        }
    }

    printf("The maximum value is %i\n", max);

    return 0;
}
