#include <stdio.h>
/**
 * A program that prints the numbers from 00 to 99
 */
int main(void)
{
	int num;

	for (num = 00; num <= 99; num++)
	{
		putchar(num / 10 + '0');
		putchar(num % 10 + '0');
		if (num < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
