#include "headerfile.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked - allocate memory
 * @b: int
 * Return: arr
 */
void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (arr == NULL)
		exit(98);
	return (arr);
}
