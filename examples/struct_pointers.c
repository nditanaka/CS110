#include <stdio.h>

struct point {
    double x;
    double y;
};

struct rectangle {
    struct point upper_left;
    struct point lower_right;
};


// Calculates and returns the area of a rectangle. The rectangle is passed by
// pointer, and is const because we will not change the values of the
// rectangle's members.
double rectangle_area(const struct rectangle *rect);


// Given a pointer to a rectangle, this function fills in the rectangle's
// members' values. Nothing is returned because the rectangle is modified
// through the pointer.
void create_rectangle(struct rectangle *rect, double upper_left_x,
                      double upper_left_y, double lower_right_x,
                      double lower_right_y);

int main() {
    struct point pt;

    pt.x = 2.5;
    pt.y = 10.2;

    struct point *point_pointer = &pt;

    printf("The point's coordinates are (%lf,%lf)\n", pt.x, pt.y);
    printf("The point's coordinates via pointer are (%lf,%lf)\n",
           point_pointer->x, point_pointer->y);

    struct rectangle rect;

    create_rectangle(&rect, 0.0, 2.0, 4.0, 0.0);

    double area = rectangle_area(&rect);

    printf("The area is %lf\n", area);

    return 0;
}

double rectangle_area(const struct rectangle *rect) {
    double width = rect->lower_right.x - rect->upper_left.x;
    double height = rect->upper_left.y - rect->lower_right.y;

    return width * height;
}

void create_rectangle(struct rectangle *rect, double upper_left_x,
                      double upper_left_y, double lower_right_x,
                      double lower_right_y) {
    rect->upper_left.x = upper_left_x;
    rect->upper_left.y = upper_left_y;
    rect->lower_right.x = lower_right_x;
    rect->lower_right.y = lower_right_y;
}
