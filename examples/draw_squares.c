#include <stdio.h>

/*
Draws a square of asterisks where each side has size size.

Parameters:
   size - the size of a side of a square
*/
void draw_square(int size);

int main() {
    for(int n = 1; n <= 10; n++) {
        draw_square(n);
        printf("\n");
    }

    return 0;
}

void draw_square(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("*");
        }
        printf("\n");
    }
}
