#include <stdio.h>
/**
 * A program that finds and prints the sum of the even-valued terms, followed by a new line
 */
int main(void)
{
	int evens = 0;
	int a;
	int b;
	int sum = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			evens += sum;
	}
	printf("%d\n", evens);

	return (0);
}
