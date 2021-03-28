#include "headerfile.h"
#include <stdio.h>

/**
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
