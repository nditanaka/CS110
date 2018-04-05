/*
There are two ways of making comments in C. This is a block comment which can
span multiples lines.
*/

// This is a line comment which ends at the end of this line.

// This line includes a standard library header file which gives us functions
// for input and output.
#include <stdio.h>

// Every C program must have a main() function, and execution starts in main().
// Every function is contained within curly braces ({ and })
int main() {
    // printf() prints output to the console.
    // In C, each statement must end with a semicolon.
    // A \n is a newline character, which causes output to start on the next
    // line.
    printf("Hello, world!\n");

    // The values that main() returns is called the exit code. Returning 0
    // means everything went ok.
    return 0;
}
