#include "headerfile.h"
/**
 * _strcat - entry point
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int str1;
	int str2;

	for (str1 = 0; dest[str1] != 0; str1++)
	{
	}
	for (str2 = 0; src[str2] != 0; str2++)
	{
		dest[str1 + str2] = src[str2];
	}
	return (dest);
}
