#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str1[] = "Hello world"; // Strings are simply char arrays in C. 
	// C adds a \0 in the end as a terminator
	
	// As the array is contiguous it is actually referred by its beggining in memory
	// that means that printing an array variable as an integer or a pointer
	// will result on the adress being displayed, and not the value.
	// So, when we're dealing with arrays we're dealing with adresses! 
	printf("%s %c %p %p %p\n", str1, str1[0], &str1, &str1[0], str1);

	return EXIT_SUCCESS;
}
