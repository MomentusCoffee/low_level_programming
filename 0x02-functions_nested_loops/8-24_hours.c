#include custom_header.h
/**
 * A function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int index1;
	int index2;

	for (index1 = 00; index1 < 23; index1++)
	{
		for (index2 = 00; index2 < 60; index2++)
		{
			_putchar(index1 / 10 + '0');
			_putchar(index1 % 10 + '0');
			_putchar(':');
			_putchar(index2 / 10 + '0');
			_putchar(index2 % 10 + '0');
			if (index2 == 59 && index1 < 23)
			{
				index1++;
				index2 = 0;
			}
			_putchar('\n');
		}
	}
}
