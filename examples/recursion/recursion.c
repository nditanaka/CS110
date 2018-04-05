/*
 * recursion.c
 *
 */

#include <stdio.h>
#include <stdbool.h>

unsigned long int factorial(unsigned int n);
int fibonacci(int n);
void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main(){
	// User choice
	int choice;

	printf("Please enter 1 for factorial, 2 for fibonacci, 3 for bubble sort: ");
	// Read a choice from the user to run each function
	scanf("%d", &choice);

	if(choice == 1){ // factorial, i.e. number! = number*(number-1)*(number-2)*...*2*1
		unsigned int j;
		unsigned int number;

		printf("Enter a positive integer: ");
		// Read a positive integer from the user
		scanf("%2u", &number);

		// Call factorial function to calculate the factorial of each j
		for (j = 0; j < number; ++j){
			printf("%2u! = %lu\n", j, factorial(j));
		}
	}else if(choice == 2){ // fibonacci numbers
		int i, number;

		printf("Enter a positive integer: ");
		// Read a positive integer from the user
		scanf("%d", &number);

		// Call the recursive function
	    for (i = 0; i < number; i++) {
	       printf("fib(%d) = %d\n", i, fibonacci(i));
	    }
	}else if(choice  == 3){
		// The array to be sorted
		int arr[] = {5, 1, 4, 2, 8};

		// The number of element in the array to be sorted
		int n = sizeof(arr)/sizeof(arr[0]);

		// Print the array to be sorted.
		printf("Array to be sorted : ");
		printArray(arr,n);

		// Call the recursive function to start sorting
		bubbleSort(arr, n);

		// Print the sorted array.
		printf("Sorted array : ");
		printArray(arr,n);
	}else{
		// If the user's choice is not any of the given ones, print following message and exit.
		printf("Invalid choice!");
	}

	return 0;
}

// Example 1. Factorial of a number
unsigned long int factorial(unsigned int n){
	unsigned long int result;

	if (n == 0) // A base case to prevent an infinite loop
		return 1;
	else
		result = n*factorial(n-1);  // Break into a smaller problem and call factorial function

	// Return the result to itself which called itself
	return result;
}

// Example 2. Fibonacci numbers through n
int fibonacci(int n) {
	int s;

	// A base case to prevent an infinite loop
	if(n == 0) {
		return 0;
	}

    // The other base case to prevent an infinite loop
    if(n == 1) {
        return 1;
    }

    // Break into two smaller problems and call the recursive function for the two subproblems.
    s = fibonacci(n-1) + fibonacci(n-2);

    // Return the result to itself which called itself
    return s;
}

// Example 3. Bubble sort
void bubbleSort(int arr[], int n){
	int i, temp;
	bool swapped = false; // The initial value is no change in order.

    // If there is only one element in the array, return it. No need to sort.
    if (n == 1)
        return;

    // One pass of bubble sort.
    // After this pass, the largest element is moved to end.
    for (i = 0; i < n-1; i++){
        if (arr[i] > arr[i+1]){
        	temp = arr[i];
        	arr[i] = arr[i+1];
        	arr[i+1] = temp;
        	// There is an order change. If all the elements are in the right order, this variable is never set to true.
        	swapped = true;
        }
    }

    if (swapped) // Check if any elements were swapped.
    	// Largest element is fixed, sort remaining array.
    	bubbleSort(arr, n-1);
}

/* Function to print an array */
void printArray(int arr[], int n){
    for (int i=0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
