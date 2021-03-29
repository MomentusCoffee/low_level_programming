#include "headerfile.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;

	concat = string_nconcat("C is ", "Awesome !!!", 7);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
