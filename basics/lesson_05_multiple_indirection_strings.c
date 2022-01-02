#include <stdio.h>
#include <stdlib.h>

#define LENGHT 3
char *words[LENGHT];

int main(void) {

	char *pc;    // Pointer to char
	char **ppc;  // Pointer to char pointer

	printf("Multiple indirection example:\n");

	// initializing array
	words[0] = "zero";
	words[1] = "one";
	words[2] = "two";

	// iterating trough the array
	for (int i = 0; i < LENGHT; i++) {
		printf("%s\n", words[i]);
	}

	// A pointer to an array of strings is the same thing as a pointer to a char
	
	printf("\n Now print the chars in each string...\n");

	ppc = words;
	for (int i = 0; i < LENGHT; i++) {
		ppc = words + i;
		pc = *ppc;
		while (*pc != 0) {
			printf("%c ", *pc);
			pc += 1;
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}

