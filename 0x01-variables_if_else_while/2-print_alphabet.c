#include <stdio.h>
/**
 * A program that prints the alphabet in lowercase, followed by a new line
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
