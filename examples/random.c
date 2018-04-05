#include <stdio.h>
#include <stdlib.h>  // for srand() and rand()
#include <time.h>    // for time()


int roll_die();

int main(int argc, char **argv) {
    if(argc != 2) {
        printf("You must provide a number of rolls\n");
        return 1;
    }

    // Seed the random number generator with the current time in seconds
    srand(time(NULL));

    size_t counts[6] = {0};

    int roll_count = atoi(argv[1]);

    for(int i = 0; i < roll_count; i++) {
        counts[roll_die() - 1] += 1;
    }

    for(size_t i = 0; i < 6; i++) {
        printf("%zu: %zu\n", i + 1, counts[i]);
    }

    return 0;
}

int roll_die() {
    return rand() % 6 + 1;
}
