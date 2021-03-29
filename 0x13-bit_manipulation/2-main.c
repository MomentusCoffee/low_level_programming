#include <stdio.h>
#include "headerfile.h"

/**
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = get_bit(1024, 10);
	printf("%d\n", n);
	n = get_bit(98, 5);
	printf("%d\n", n);
	n = get_bit(1024, 0);
	printf("%d\n", n);
	return (0);
}
