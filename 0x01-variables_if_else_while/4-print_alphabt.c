#include <stdio.h>
/**
 * A program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * 	Print all the letters except q and e
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
