#include "variadic_functions.h"
/**
 * print_strings - prints string
 * @separator: char
 * @n: unsigned int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int x;
	char *y;

	va_start(str, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(str, char *);
		if (x > 0 && separator != NULL)
			printf("%s", separator);
		if (y == NULL)
			printf("(nil)");
		else
			printf("%s", y);
	}
	printf("\n");
	va_end(str);
}
