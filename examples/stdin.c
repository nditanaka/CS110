// This program reads from standard input one character at a time, and if the
// character is an alphabetic character it prints out the uppercase version
// of that character. If you run this program you can type input from the
// keyboard and it will print the uppercase letters after you press enter, and
// you can press ctrl-d to send the EOF that will exit the loop.
//
// You can also run the program like this:
//
// ./stdin < file.txt
//
// This will use the contents of file.txt as the standard input to the program.
// If you want to try this out you can create a file in your editor, or you can
// use the source code of the program itself as input:
//
// ./stdin < stdin.c

#include <stdio.h>
#include <ctype.h>

int main() {
    // EOF is an int, which is outside the range of a char. So we first need
    // to store the return value as an int to check for EOF, then we can
    // treat it as a char.
    int c;

    while((c = getchar()) != EOF) {
        // If the body of this loop is being executed, that means that c is not
        // EOF but rather a valid character. The code below checks to see if
        // c is an alphabetic character, and if so it prints out the uppercase
        // version of that character.
        if(isalpha(c)) {
            putchar(toupper(c));
        }
    }

    return 0;
}
