#include "module_two.h"

void function_two(int x) {
    printf("function_two was called with the parameter %i\n", x);
    if(x > 0)
        function_one(x - 1);
}
