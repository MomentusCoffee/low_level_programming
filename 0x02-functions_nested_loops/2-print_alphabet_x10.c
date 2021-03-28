#include "headerfile.h"
/**
 * A function that prints 10 times the alphabet, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	int alpha;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
