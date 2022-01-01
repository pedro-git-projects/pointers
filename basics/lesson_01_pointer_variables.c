#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num;
	int *numPtr; // making so that this is a pointer variable
	int num2;
	
	num = 100;
	numPtr = &num; // storing the address of the variable num in the numPtr variable

	num2 = *numPtr; // using the indirection or dereferencing operator to retreive the value sotred at the pointer adress 

	printf("num=%d, numPtr=%d, the adress of num=%d, and num2=%d\n", num, numPtr, &num, num2);

	// adequate way to print a pointers and references
	printf("integer: %d, pointer: %p, adress: %p, integer that was assigned with pointer: %d\n", num, numPtr, &num, num2);

	return EXIT_SUCCESS;
}
