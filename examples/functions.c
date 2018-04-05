#include <stdio.h>
#include <stdbool.h>

// This is a function prototype which defines the return type, the name,
// the parameters, but not the body. The body is defined later. The book would
// put this prototype inside the functions that use is_triangle(), but that
// is not common practice.
bool is_triangle(int length_a, int length_b, int length_c);

int main() {
    int length_a, length_b, length_c;

    printf("Enter 3 integer lengths: ");
    scanf("%i", &length_a);
    scanf("%i", &length_b);
    scanf("%i", &length_c);

    if(is_triangle(length_a, length_b, length_c)) {
        printf("Those lengths form a triangle\n");
    }
    else {
        printf("Those lengths do not form a triangle\n");
    }

    return 0;
}

bool is_triangle(int length_a, int length_b, int length_c) {
    return (length_a + length_b > length_c &&
            length_a + length_c > length_b &&
            length_b + length_c > length_a);
}
