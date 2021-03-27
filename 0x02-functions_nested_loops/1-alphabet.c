#include custom_header.h
/**
 * A function that prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
