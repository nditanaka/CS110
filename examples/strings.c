#include <stdio.h>
#include <string.h>


void print_string_with_putchar(const char string[]);

// Modify a string so that it repeats the original string twice. The array
// containing the string must be at least twice the length of the original
// string plus one.
void repeat_string(char string[]);

int main() {
    char c = 'a';

    // print c as a character
    printf("%c\n", c);
    // print c as an integer. 'a' is 97
    printf("%i\n", c);

    char initialized_as_array[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("%s\n", initialized_as_array);

    char initialized_as_string[] = "Hello";

    printf("%s\n", initialized_as_string);

    // This string has the potential to store a string up to length 99. The
    // 100th character would need to store the '\0'
    char array_larger_than_string[100] = "Hello";

    char no_null_character[] = {'h', 'e', 'l', 'l', 'o'};
    // The statement below would keep printing characters until it finds a 0
    // value in memory
    // printf("%s\n", no_null_character);

    char string[100] = "Hello";

    // strlen() returns a size_t, %zu is used to print a size_t
    printf("This string is of length %zu\n", strlen(string));

    print_string_with_putchar(string);
    putchar('\n');

    repeat_string(string);
    printf("%s\n", string);

    return 0;
}


void print_string_with_putchar(const char string[]) {
    for(size_t i = 0; string[i] != '\0'; i++) {
        putchar(string[i]);
    }
}

void repeat_string(char string[]) {
    size_t length = strlen(string);

    for(size_t i = 0; i < length; i++) {
        string[i + length] = string[i];
    }

    string[length * 2] = '\0';
}
