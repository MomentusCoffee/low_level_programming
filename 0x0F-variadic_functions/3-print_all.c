#include "variadic_functions.h"
/**
 * for_c - prints char
 * @ok: va_list
 */
void for_c(__attribute__((unused)) va_list ok)
{
	printf("%c", va_arg(ok, int));
}
/**
 * for_i - prints int
 * @ok: va_list
 */
void for_i(__attribute__((unused)) va_list ok)
{
	printf("%i", va_arg(ok, int));
}
/**
 * for_f - prints float
 * @ok: va_list
 */
void for_f(__attribute__((unused)) va_list ok)
{
	printf("%f", va_arg(ok, double));
}
/**
 * for_s - prints string
 * @ok: va_list
 */
void for_s(__attribute__((unused)) va_list * ok)
{
	char *s;

	s = va_arg(ok, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}
/**
 * print_all - prints anything
 * @format: arguments
 */
void print_all(const char * const format, ...)
{
	va_list ok;
	int i = 0;
	int index = 0;
	char *x;
	char *y;

	op_t ops[] = {
		{"c", for_c},
		{"i", for_i},
		{"f", for_f},
		{"s", for_s},
		{"\0", NULL}
	};

	x = "";
	y = ", ";
	va_start(ok, format);
	while (format != NULL && format[i] != '\0')
	{
		index = 0;
		while (ops[index].op[0] != '\0')
		{
			if (ops[index].op[0] == format[i])
			{
				printf("%s", x);
				ops[index].f(ok);
				x = y;
			}
			index++;
		}
		i++;
	}
	printf("\n");
	va_end(ok);
}
