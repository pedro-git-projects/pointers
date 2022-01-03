#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	/*
	 * calloc is like malloc but 
	 * it first initialize all values to 0
	 * malloc and calloc will return a null pointer if they fail
	 * they'll return a memory adress otherwise
	 * */

	char *s;
	int i;
	int *p;

	s = (char*)malloc(6);
	
	for(i = 0; i < 6; i++) printf("s[%d]=%d\n", i, s[i]);
	free(s);
	printf("\n");

	s = (char*)calloc(6, sizeof(char));
	
	for (i = 0; i < 6; i++) printf("s[%d]=%d\n",i, s[i]);
	free(s);
	printf("\n");

	p = (int*)calloc(6, sizeof(int));
	for(i = 0; i < 6; i++) printf("p[%d]=%d\n", i, p[i]);
	free(p);

	EXIT_SUCCESS;
}
