#include "headerfile.h"
#include <stdio.h>

/**
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "CisAwesome!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
