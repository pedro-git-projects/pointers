#include <stdio.h>
#include <stdlib.h>

#define LENGHT 3

int data [LENGHT];

int main(void) {
	
	int *pi;
	int **ppi;

	printf("multiple indirection example:\n\n");

	// Initialize our integer array
	for (int i = 0; i < LENGHT; i++) {
		data[i] = i;
	}
	for (int i = 0; i < LENGHT; i++) {
		printf("%d\n", data[i]);
	}

	// pointer to integer
	
	pi = data;    // set the pointer to an integer to the start of the data array
	ppi = &pi;    // set the pointer to a pointer to pi itself

	for (int i = 0; i < LENGHT; i++) {
		printf("\nLoop[%d] array adress is %p\n", i, data);
		printf("item pointed to by pi is %d\n", *pi);
		printf("item pointed by ppi is %p\n", *ppi);
		printf("The adress of pi is %p and the value of pi (what it points to) is %p\n\n", &pi, ppi);
		printf("The value of pi is %p and it points to %d\n\n", pi, *pi);

		pi += 1;
	}

	return EXIT_SUCCESS;
}
