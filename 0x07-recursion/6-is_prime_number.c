#include "headerfile.h"
/**
 * prime - helper
 * @x: int
 * @n: int
 * Return: 1
 */
int prime(int x, int n)
{
	if ((n % x == 0) && (n != x))
		return (0);
	if ((n % x != 0) && (x < n))
		return (prime(x + 1, n));
	return (1);
}
/**
 * is_prime_number - checks for prime numbers
 * @n: int
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n < 2)
		return (0);
	return (prime(x, n));
}
