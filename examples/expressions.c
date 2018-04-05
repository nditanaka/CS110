#include <stdio.h>

int main() {
    // An expression consists of either one item (variable or a literal value
    // such as 5) or a number of items interconnected by operators.
    // An expression evaluates to a value.

    // Assign to x the value that 5 evaluates to, which is 5
    int x = 5;

    // Assign to y the value you get when x + 2 is evaluated. This depends on
    // the current value of x.
    int y = x + 2

    // Order of operations is preserved when evaluating expressions. All
    // opeators have a precedence level.
    // http://en.cppreference.com/w/c/language/operator_precedence
    int z = (x + y) * 3;

    // This expression assigns the value 6 to x, but also evaluates to 6
    x = 6;

    // First y is assigned to 10. The expression y = 10 evaluates to 10, so
    // 10 is also assigned to x.
    x = y = 10;

    // This typo can lead to weird behavior, because it will assign 3 to z, and
    // the statement evaluates to 3, which is true, so the body is always
    // executed.
    if(z = 3) {
        printf("z is 3\n");
    }

    // Be careful with = vs ==

    return 0;
}
