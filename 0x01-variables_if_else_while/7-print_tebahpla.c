#include <stdio.h>
/**
 * A program that prints the lowercase alphabet in reverse, followed by a new line
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
