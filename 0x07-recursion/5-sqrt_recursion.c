#include "headerfile.h"
/**
 * _square - helper
 * @y: int
 * @n: int
 * Return: -1
 */
int _square(int y, int n)
{
	int x;

	x = y * y;

	if (x == n)
		return (y);
	if (x < n)
		return (_square(y + 1, n));
	return (-1);
}
/**
 * _sqrt_recursion - square root
 * @n: int
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if ((n == 0) || (n == 1))
		return (n);
	return (_square(1, n));
}
