#include "headerfile.h"
/**
 * more_numbers - print numbers 1-14 x10
 */
void more_numbers(void)
{
	int count;
	int mult;

	for (mult = 0; mult <= 9; mult++)
	{
		for (count = 0; count <= 14; count++)
		{
			if (count > 9)
				_putchar(count / 10 + '0');
			_putchar(count % 10 +'0');
		}
		_putchar('\n');
	}
}
