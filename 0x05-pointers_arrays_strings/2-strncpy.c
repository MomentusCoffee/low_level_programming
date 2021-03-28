#include "headerfile.h"
/**
 * _strncpy - entry point
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int str;

	for (str = 0; str < n && src[str] != '\0'; str++)
	{
		dest[str] = src[str];
	}
	for (; str < n; str++)
	{
		dest[str] = '\0';
	}
	return (dest);
}
