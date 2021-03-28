#include "headerfile.h"
/**
 * puts2 - prints every other char in a string
 * @str: pointer
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
