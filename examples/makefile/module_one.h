// If this is the first time the preprocessor processes this file,
// MODULE_ONE_H will be undefined. The next time it tries, it will be defined
// because we define it right after the #ifndef
// This is called an include guard and prevents circular includes
#ifndef MODULE_ONE_H
#define MODULE_ONE_H

#include <stdio.h>

#include "module_two.h"

void function_one(int x);

#endif
