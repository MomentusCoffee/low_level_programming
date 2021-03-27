#include <stdio.h>

/**
 * A program that prints all possible combinations of two two-digit numbers
 */

int main(void)
{
	int ten_1;
	int one_1;
	int ten_2;
	int one_2;

	for (ten_1 = '0'; ten_1 <= '9'; ten_1++) /*print first two digit combo*/
	{
		for (one_1 = '0'; one_1 <= '9'; one_1++)
		{
		 	for (ten_2 = ten_1; ten_2 <= '9'; ten_2++) /*print second of pair*/
			{
				for (one_2 = one_1 + 1; one_2 <= '9'; one_2++)
				{
					putchar(ten_1);
					putchar(one_1);
					putchar(' ');
					putchar(ten_2);
					putchar(one_2);

					if (!((ten_1 == '9' && one_1 == '8') &&
					      (ten_2 == '9' && one_2 == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				o = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
