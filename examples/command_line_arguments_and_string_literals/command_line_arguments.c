#include <stdio.h>


// argc is the number of command line arguments, argv is an array of strings,
// or an array of char *, or a char **
int main(int argc, char **argv) {
    printf("argc is %i\n", argc);

    printf("Here are the command line arguments used to run this program:\n");

    for(int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}
