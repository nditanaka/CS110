#include <stdio.h>

int main() {
    int size = 70;

    for(int row = 0; row < size; row++) {
        for(int col = 0; col < size; col++) {
            printf("%i, %i\n", row, col);
        }
    }

    printf("-----\n");

    for(int x = 0; x < size; x++) {
        for(int y = x; y < size; y++) {
            printf("%i, %i\n", x, y);
        }
    }

    printf("-----\n");

    for(int row = 0; row < size; row++) {
        for(int col = 0; col < size; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
