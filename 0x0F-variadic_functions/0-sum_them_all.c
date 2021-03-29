#include "variadic_functions.h"
/**
 * sum_them_all - Get sum of all parameters
 * @n: const unsigned int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int x;
	unsigned int sum;

	if (n == 0)
		return (0);

	va_start(num, n);

	sum = 0;
	for (x = 0; x < n; x++)
		sum += va_arg(num, int);

	va_end(num);
	return (sum);
}
