#include "headerfile.h"
/**
 * puts_half - prints second half of string
 * @str: pointer
 */
void puts_half(char *str)
{
	int i;
	int x;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 != 0)
		i = (i - 1) / 2;
	else
		i /= 2;
	for (x = i; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
