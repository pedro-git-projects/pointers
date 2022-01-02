#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#define MAXSTRLEN 100

char *string_function(char *astring) {
	char* s;
	// allocating 100 bytes to our char pointer (aka: string)
	s = (char*)malloc(MAXSTRLEN);
	
	// assigning null to s, which creates an empty string
	s[0] = 0;

	// we use strcat to concatenate hello, our string and a new line to the user fed string
	strcat(s,"Hello, ");
	strcat(s, astring);
	strcat(s, "\n");

	return s;
}

int main(int argc, char **argv) {
	if(argv[1]) {
		char *userInput = string_function(argv[1]);
		printf("%s", userInput);
	} else {
		printf("Remember to pass at least one argument\n");
	}

	return EXIT_SUCCESS;
}
