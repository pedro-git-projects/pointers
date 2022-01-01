#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num;
	int *numPtr;
	int num2;
	
	num = 100;
	numPtr = &num; // storing the address of the variable num in the numPtr variable

	num2 = *numPtr; // pointer to an int 

	printf("num=%d, numPtr=%d, the adress of num=%d, and num2=%d\n", num, numPtr, &num, num2);

	// adequate way to print a pointer
	printf("integer: %d, pointer: %p, adress: %p, integer that was assigned with pointer: %d\n", num, numPtr, &num, num2);

	return EXIT_SUCCESS;
}
