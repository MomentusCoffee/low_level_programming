#include "headerfile.h"
/**
 * A function that prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int col;
	int row;
	int sum;

	for (col = 0; col <= 9; col++)
	{
		for (row = 0; row <= 9; row++)
		{
			sum = col * row;
			if (sum <= 9)
			{
				if (row == 0)
					_putchar(sum + '0');
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(sum + '0');
				}
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(sum / 10 + '0');
				_putchar(sum % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
