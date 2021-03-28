#include "headerfile.h"
/**
 * print_diagonal - print diagonal lines
 * @n: int
 */
void print_diagonal(int n)
{
	int space;
	int diag;

	if (n > 0)
	{
		for (space = 0; space < n; space++)
		{
			for (diag = 1; diag <= space; diag++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
