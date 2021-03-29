#include "headerfile.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - allocates memory for array
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: s1
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s1;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s1 = malloc(nmemb * size);
	if (s1 == NULL)
		return (NULL);
	for (index = 0; index < nmemb * size; index++)
		*((char *)s1 + index) = 0;
	return (s1);
}
