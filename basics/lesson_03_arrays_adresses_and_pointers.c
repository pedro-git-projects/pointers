#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// An array variable IS the adress of the array!
	char str1[] = "An array!";

	// A pointer variable is not an array: It is a variable that stores the adress of an array
	// This means that the pointer variable is stored in an adress and the pointer at another
	char *str2 = "A pointer!";

	printf("%p %p %s\n", &str1, str1, str1);
	printf("%p %p %s\n", &str2, str2, str2);

	return EXIT_SUCCESS;
}
