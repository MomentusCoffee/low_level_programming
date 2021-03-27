#include <stdio.h>
/**
 * A program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line
 */
int main(void)
{
	int counter;
	int count = 50;
	long a = 1;
	long b = 2;

	for (counter = 1; counter <= (count / 2); counter++)
	{
		printf("%li %li ", a, b);
		a += b;
		b += a;
	}
	if (count % 2 == 1)
		printf("%li", a);

	printf("\n");

	return (0);
}
