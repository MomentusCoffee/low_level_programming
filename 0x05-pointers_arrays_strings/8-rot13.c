#include "headerfile.h"
/**
 * rot13 - entry point
 *@s: pointer
 * Return: s
 */
char *rot13(char *s)
{
	int count;
	char in[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int count2;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count2 = 0; count2 < 53; count2++)
		{
			if (s[count] == in[count2])
			{
				s[count] = out[count2];
				break;
			}
		}
	}
	return (s);
}
