#include <stdio.h>

int main() {
    // This variable has been declared but not initialized. The declaration
    // specifies the type and name of the variable.
    int x;

    // Right here, x is uninitialized and its value is unknown
    printf("Uninitialized x: %i\n", x);

    // This is the first time we assign a value to x, so it is the
    // initialization.
    x = 10;

    // This declares and initializes y on the same line
    int y = 20;

    int z = 2147483647;

    int overflowed = z + 1;

    printf("z: %i\n", z);
    printf("z + 1: %i\n", overflowed);

    // The addition happens before the comparison
    if(x < y + z) {
        print("yep\n");
    }

    return 0;
}
