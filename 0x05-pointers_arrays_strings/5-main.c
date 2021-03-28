#include "headerfile.h"
#include <stdio.h>

/**
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "C is Awesome!\n";
	char *p;

	p = string_toupper(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
