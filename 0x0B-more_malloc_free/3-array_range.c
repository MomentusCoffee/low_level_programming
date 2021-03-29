#include "headerfile.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates array of integers
 * @min: int
 * @max: int
 * Return: array
 */
int *array_range(int min, int max)
{
	int *s1;
	int x;

	if (min > max)
		return (NULL);

	s1 = malloc(sizeof(int) * (max - min + 1));

	if (s1 == NULL)
		return (NULL);

	for (x = 0; min + x <= max; x++)
	{
		s1[x] = min + x;
	}
	return (s1);
}
