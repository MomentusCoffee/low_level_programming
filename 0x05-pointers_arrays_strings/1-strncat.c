#include "headerfile.h"
/**
 * _strncat - entry point
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int str1;
	int str2;

	for (str1 = 0; dest[str1] != '\0'; str1++)
	{
	}
	for (str2 = 0; n > str2 && src[str2] != '\0'; str2++)
	{
		dest[str1 + str2] = src[str2];
	}
	return (dest);
}
