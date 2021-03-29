#include "headerfile.h"
/**
 * _strcmp - entry point
 * @s1: pointer
 * @s2: pointer
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 != '\0' && *s2 != '\0'; s1++, s2++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
	}
	return (*s1 - *s2);
}
