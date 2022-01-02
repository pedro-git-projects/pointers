#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int main(int argc, char **argv) {
	char *s;
	long stringSize;

	if(argv[1]) {

	stringSize = strlen(argv[1]);
	printf("the size of %s is %ld\n", argv[1] ,stringSize);	
	

	s = malloc(stringSize); // allocating memory according to our input size
	if(!s) {
		printf("malloc failed!\n");
		EXIT_FAILURE;
	}

	// copy string into the newly allocated memory
	strncpy(s, argv[1], stringSize);

	printf("The value of our string is %s\n", s);
 }else {
	 puts("Please enter at least one value");
 }
}
