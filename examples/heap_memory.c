/*
The heap
   Area where dynamicaly allocated memory is stored
   Memory in the heap can only be accessed through pointers
malloc()
   Allocates memory on the heap and returns a pointer to the memory
   The memory could be used to store an array or a single value
   A pointer to heap arrays uses the array[i] syntax just like stack arrays
   Memory is not initialized
   Prototype:
      void *malloc(size_t size)
      size is the size of the allocated memory in bytes
   void *
       A generic pointer type that can point to any memory
       Cannot be dereferenced
       Will be cast to another pointer type automatically when assigned
calloc()
   Prototype: void *calloc(size_t count, size_t size)
       count - the number of items to allocate
       size - the size of each item in bytes
   Allocates enough memory to store count items of size bytes each
   The memory is initialized to 0
free()
   Deallocates heap memory
   Prototype: void free(void *pointer)
   Memory leaks
       If ptr is a pointer to heap memory, reassigning ptr to point to a
       different address *will not* free the memory automatically
       Heap memory that has no pointer pointing to it is inaccessible and cannot
       be accessed or freed until the program exits
*/

#include <stdio.h>
#include <stdlib.h>  // for malloc(), calloc()

void print_array(int *array, size_t size);

// Return a dynamically allocated array containing the first count non-negative
// integer powers of 2.
int *get_powers_of_2(size_t count);

int main() {
    // This allocates enough memory on the heap to store one int. We use
    // sizeof(int) instead of 4 for the size, because an int is not guaranteed
    // to be 4 bytes on every computer.
    int *p = malloc(sizeof(int));

    *p = 10;

    printf("*p is %i\n", *p);

    // Allocate an array that can store 5 ints.
    int *heap_array = malloc(5 * sizeof(int));

    // at this point the array is uninitialized and so the values will be
    // garbage
    print_array(heap_array, 5);

    for(int i = 0; i < 5; i++) {
        heap_array[i] = i;
    }

    print_array(heap_array, 5);

    int stack_array[] = {1, 2, 3, 4, 5};

    print_array(stack_array, 5);

    int *calloc_array = calloc(5, sizeof(int));

    // This will print 5 0's since calloc() initializes elements to 0
    print_array(calloc_array, 5);

    int *powers = get_powers_of_2(10);

    print_array(powers, 10);

    // Free up all of the memory that we allocated.
    free(p);
    free(heap_array);
    free(calloc_array);
    free(powers);

    return 0;
}

void print_array(int *array, size_t size) {
    for(int i = 0; i < size; i++) {
        printf("%i ", array[i]);
    }
    printf("\n");
}

int *get_powers_of_2(size_t count) {
    // This array will survive after the function returns because heap memory
    // is not automatically deallocated
    int *powers = malloc(count * sizeof(int));

    int power = 1;

    for(size_t i = 0; i < count; i++) {
        powers[i] = power;
        power *= 2;
    }

    return powers;
}
