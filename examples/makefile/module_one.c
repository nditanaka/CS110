#ifndef MODULE_TWO_H
#define MODULE_TWO_H


#include "module_one.h"


void function_one(int x) {
    printf("function_one was called with the parameter %i\n", x);
    if(x > 0)
        function_two(x - 1);
}

#endif
