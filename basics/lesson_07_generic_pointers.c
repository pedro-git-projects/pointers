#include <stdio.h>
#include <stdlib.h>

#define LENGTH 3

int data[LENGTH];
char *words[LENGTH];

int main(void) {
	void *gp; // we declare generic pointers as pointing to void types

	printf("Generic pointer example :\n");

	for (int i = 0; i < LENGTH; i++) {
		data[i] = i;
	}	

	for (int i = 0; i < LENGTH; i++) {
		printf("%d\n", data[i]);
	}

	words[0] = "zero";
	words[1] = "one";
	words[2] = "two";
	
	for(int i = 0; i < LENGTH; i++) {
		printf("%s\n", words[i]);
	}

	// will this print a char?
	// Yes it will!
	// Because a string is a pointer to a char, when we dereference the string, we get
	// its value, the char where the string begins
	for(int i = 0; i < LENGTH; i++) {
		printf("%c\n", *words[i]);
	}

	gp = data; // pointing our pointer to void to a integer array
	printf("\nThe integer array adress is %p\n", gp);

	printf("item pointed to by gp is %d\n", *(int*)gp); // To dereference a generic pointer, first we need to CAST it 

	gp = (int*)gp + 1;
	printf("intem pointed to by gp is now %d\n", *(int*)gp);

	// TODO: use our generic pointer with an array of strings and dereference it
	// DONE
	
	gp = words;
	printf("\nThe string array adress is %p\n", gp);

	// Must remember that an array of string is an array of arrays of chars
	// because each string is an array of chars
	// so the cast must be a pointer to a pointer to a char
	printf("the item pointed to by gp is %s\n", *(char**)gp);
	gp = (char**)gp + 1;

	printf("the item pointed to by gp is now %s\n", *(char**)gp);
}
