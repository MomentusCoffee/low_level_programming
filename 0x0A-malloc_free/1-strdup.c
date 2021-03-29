#include "headerfile.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - string duplicate
 * @str: char
 * Return: str
 */
char *_strdup(char *str)
{
	int size;
	int index;
	int c;
	char *copy;

	if (str == NULL)
		return (NULL);

	for (c = 0; str[c] != '\0'; c++)
		;
	size = c + 1;

	copy = (char *)malloc(sizeof(char) * size);
	if (copy == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		copy[index] = str[index];
	return (copy);
}
