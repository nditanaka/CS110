#include <stdio.h>

int main() {
    int x = 10;

    while(x >= 0) {
        printf("%i\n", x);
        x = x - 1;
        // This does the same thing:
        // x -= 1;
        // So does this:
        // x--;
    }

    printf("After the loop x is %i\n", x);

    for(int y = 10; y >= 0; y--) {
        printf("%i\n", y);
    }

    // The following will be an error because y is local to the loop and is
    // undeclared here
    // printf("After the loop y is %i\n", y);

    for(int i = 0; i < 10; i++) {
        printf("Hello\n");
    }

    return 0;
}
