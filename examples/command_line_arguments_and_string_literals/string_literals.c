#include <stdio.h>

void reverse_string(const char *original, char *reversed);

int main() {
    // The characters are copied into the array, and I can change the array
    char array_string[] = "Hello";

    array_string[0] = 'h';

    printf("The string is now %s\n", array_string);

    // pointer_string points to a read-only string literal, and the program
    // will crash if you try to modify the elements
    char *pointer_string = "Hello";

    // This would crash the program
    // pointer_string[0] = 'h';

    // We wold never get here if the above line was uncommented
    // printf("The string is now %s\n", pointer_string);

    // Making it const prevents accidentally trying to change its characters
    const char *const_pointer_string = "Hello";



    return 0;

}

void reverse_string(const char *original, char *reversed) {
    size_t length = strlen(original);

    for(size_t i = 0; i < length; i++) {
        reversed[i] = original[length - i - 1];
    }

    reversed[length] = '\0';
}
