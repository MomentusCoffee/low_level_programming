#include "headerfile.h"
/**
 * print_square - print square
 * Return: size
 */
void print_square(int size)
{
	int line;
	int hash;

	if (size > 0)
		for (line = 0; line < size; line++)
		{
			for (hash = 1; hash <= size; hash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
