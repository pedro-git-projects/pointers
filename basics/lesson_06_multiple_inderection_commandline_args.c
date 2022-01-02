#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	
	// argc is the amount of arguments
	// argv is the actual array of arguments

	int i;

	// iterate over the array of args
	for (int i = 0; i < argc; i++) {
		printf("arg %d, is %s\n", i, argv[i]);
	}

	printf("\n\n");

	// dereference each string arg (*argv) via pointer
	for (int i = 0; i < argc; i++) {
		printf("arg %d is %s\n", i, *argv);
		argv += 1;
	}

	return EXIT_SUCCESS;
}
