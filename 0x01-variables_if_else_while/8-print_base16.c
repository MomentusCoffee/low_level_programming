#include <stdio.h>
/**
 * A program that prints all the numbers of base 16 in lowercase, followed by a new line
 */
int main(void)
{
	int num;
	int alpha;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
