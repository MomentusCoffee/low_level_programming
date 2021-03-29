#include "variadic_functions.h"
/**
 * print_numbers - print only numbers
 * @separator: pointer
 * @n: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int x;
	int y;

	va_start(num, n);

	for (x = 0; x < n; x++)
	{
		if (x != 0 && x != n && separator != NULL)
			printf("%s", separator);
		printf("%d", y = va_arg(num, int));
	}
	printf("\n");
	va_end(num);
}
