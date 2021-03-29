#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct op - struct op
 * @op: operator
 * @f: pointer function
 */
typedef struct op
{
	char *op;
	void (*f)();
} op_t;

int _putchar(void);

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);
#endif
