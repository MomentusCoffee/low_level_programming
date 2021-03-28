#include "headerfile.h"
#define NULL 0
/**
 * _strpbrk - find string for any set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i1;
	int i2;

	for (i1 = 0; s[i1] != '\0'; i1++)
	{
		for (i2 = 0; accept[i2] != '\0'; i2++)
		{
			if (s[i1] == accept[i2])
			{
				return (&s[i1]);
			}
		}
		if (accept[i2] == '\0')
		{
			continue;
		}
	}
	return (NULL);
}
