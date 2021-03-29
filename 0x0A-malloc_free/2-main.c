#include "headerfile.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = str_concat("C is ", "Awesome");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
