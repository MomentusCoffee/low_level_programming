#include "headerfile.h"
/**
 * _strlen - return length of string
 * @s: char
 * Return: index
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
		;
	return (index);
}
