#include "headerfile.h"
/**
 * _strlen_recursion - length of string
 * @s: pointer
 * Return: s
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
