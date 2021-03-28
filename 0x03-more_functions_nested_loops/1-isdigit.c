#include "headerfile.h"
/**
 * isdigit - Checks for a digit
 * @c: int
 * Return: 1 if c is digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
