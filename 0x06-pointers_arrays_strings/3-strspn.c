#include "headerfile.h"
#include <stdio.h>
/**
 * _strspn - find prefix substring
 * @s: pointer
 * @accept: pointer
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i1;
	int i2;

	for (i1 = 0; s[i1] != '\0'; i1++)
	{
		for (i2 = 0; accept[i2] != '\0'; i2++)
		{
			if (s[i1] == accept[i2])
			{
				break;
			}
		}
		if (accept[i2] == '\0')
			break;
	}
	return (i1);
}
