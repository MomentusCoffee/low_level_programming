#include <stdio.h>
/**
 * A program that prints the alphabet in lowercase, followed by a new line
 */
int main(void)
{
	int lower;
	int upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}
