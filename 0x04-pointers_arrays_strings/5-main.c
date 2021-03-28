#include "headerfile.h"
#include <stdio.h>

/**
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[11] = "CisAwesome";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
