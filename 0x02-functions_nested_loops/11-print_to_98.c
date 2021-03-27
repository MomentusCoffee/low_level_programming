#include custom_header.h
#include <stdio.h>
/**
 * a function that prints all natural numbers from n to 98, followed by a new line
 */

void print_to_98(int n)
{
	int count;
	int i;

	for (count = n; count <= 98; count++)
	{
		printf("%d, ", count);
		if (count == n)
			printf("%d\n", count);
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
			printf("%d, ", i);
		printf("%d\n", count);
	}
}
