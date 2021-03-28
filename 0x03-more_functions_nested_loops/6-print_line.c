#include "headerfile.h"
/**
 * print_line - print a line
 * @n: int
 */
void print_line(int n)
{
	int count;

	if (n > 0)
		for (count = 1; count <= n; count++)
			_putchar('_');
	_putchar('\n');
}
