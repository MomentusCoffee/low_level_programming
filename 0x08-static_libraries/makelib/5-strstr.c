#include "headerfile.h"
#define NULL 0
/**
 * _strstr - find a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i1;
	int i2;

	for (i1 = 0; haystack[i1] != '\0'; i1++)
	{
		for (i2 = 0; needle[i2] != '\0'; i2++)
		{
			if (haystack[i1] == needle[i2])
			{
				return (&haystack[i1]);
			}
		}
	}
	return (NULL);
}
