#include <stdio.h>
/**
 * A program that prints all possible different combinations of two digits
 */
int main(void)
{
	int ten;
	int one;

	for (ten = 0; ten <= 9; ten++)
	{
		for (one = 0; one <= 9; one++)
		{
			if (ten < one)
			{
				putchar(ten + '0');
				putchar(one + '0');
				if (ten < 8 || one < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
