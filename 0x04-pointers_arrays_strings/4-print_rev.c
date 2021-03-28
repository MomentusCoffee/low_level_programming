#include "headerfile.h"
/**
 * print_rev - print string in reverse
 * @s: pointer
 */
void print_rev(char *s)
{
	int index;
	int count;
	int rev;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (count = 0; count <= index; index--)
	{
		rev = index;
		_putchar(s[rev]);
		rev++;
	}
	_putchar('\n');
}
