#include <stdio.h>

struct point {
    double x;
    double y;
};


int main() {
    size_t size = 10;

    struct point points[size];

    double x = 0.0;
    double y = 0.0;

    double delta_x = 1.0;
    double delta_y = 2.5;

    for(size_t i = 0; i < size; i++) {
        points[i].x = x;
        points[i].y = y;

        x += delta_x;
        y += delta_y;
    }

    for(size_t i = 0; i < size; i++) {
        printf("(%lf,%lf)\n", points[i].x, points[i].y);
    }

    return 0;
}
