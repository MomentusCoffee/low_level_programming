#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: char
 * @f: void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == 0 || name == 0)
		return;
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
