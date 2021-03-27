#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Assigns a random number to the variable n each time it is executed
 * The output of the program should be:
 *       if n is greater than 5: the string and is greater than 5
 *	 if n is 0: the string and is 0
 *	 if n is less than 6 and not 0: the string and is less than 6 and not 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = n % 10;
	if (ld > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of %d is %d and is 0\n", n, ld);
	else if (ld < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	return (0);
}
