#include <stdio.h>

int main() {
    printf("Enter n: ");

    int n;
    scanf("%i", &n);

    if(n < 1) {
        printf("n must be >= 1\n");
        // return 1 to indicate an error. Returning from main() will terminate
        // the program immediately. Any value other than 0 indicates an
        // error.
        return 1;
    }

    int sum = 0;

    for(int x = 1; x <= n; x++) {
        sum = sum + x;
        // or sum += x
    }

    printf("Triangle number %i is %i\n", n, sum);

    return 0;
}
