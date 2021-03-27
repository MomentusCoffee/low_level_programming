#include custom_header.h
/**
 * A function that prints the last digit of a number
 */
int print_last_digit(int ld)
{
        ld %= 10;
	if (ld < 0)
		ld *= -1;
	_putchar(ld + '0');
	return (ld);
}
