#include <stdio.h>
#include <math.h>  // for sqrt()

struct point {
    double x;
    double y;
};

struct rectangle {
    struct point p1;
    struct point p2;
};


double distance(struct point p1, struct point p2);
void print_point(struct point pt);
struct point make_point(double x, double y);
struct rectangle make_rectangle(struct point p1, struct point p2);
double rectangle_area(struct rectangle rect);

int main() {
    // pt is an instance of struct point
    struct point pt;

    // we can assign values to each of its members
    pt.x = 2.5;
    pt.y = 10;

    // print both members
    printf("Members of pt: %lf, %lf\n", pt.x, pt.y);

    struct point p1 = {10, 20};
    struct point p2 = {14, 17};

    printf("The distance between ");
    print_point(p1);
    printf(" and ");
    print_point(p2);
    printf(" is %lf\n", distance(p1, p2));

    struct rectangle rect = make_rectangle(make_point(0, 0),
                                           make_point(10, 12));

    printf("The area of the rectangle is %lf\n", rectangle_area(rect));

    return 0;
}

void print_point(struct point pt) {
    printf("(%lf,%lf)", pt.x, pt.y);
}


double distance(struct point p1, struct point p2) {
    double x_distance = p1.x - p2.x;
    double y_distance = p1.y - p2.y;

    return sqrt(x_distance * x_distance + y_distance * y_distance);
}

struct point make_point(double x, double y) {
    struct point pt = {x, y};
    return pt;
}

struct rectangle make_rectangle(struct point p1, struct point p2) {
    struct rectangle rect = {p1, p2};
    return rect;
}

double rectangle_area(struct rectangle rect) {
    double length = fabs(rect.p1.x - rect.p2.x);
    double width = fabs(rect.p1.y - rect.p2.y);

    return length * width;
}
