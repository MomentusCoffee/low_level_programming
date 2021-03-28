#include "headerfile.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals
 * @a: pointer
 * @size: int
 */
void print_diagsums(int *a, int size)
{
	int i1;
	int i2;
	int sum1 = 0;
	int sum2 = 0;

	for (i1 = 0; i1 < size * size; i1 += (size + 1))
	{
		sum1 += a[i1];
	}
	for (i2 = size - 1; i2 < size * size - 1; i2 += (size - 1))
	{
		sum2 += a[i2];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
