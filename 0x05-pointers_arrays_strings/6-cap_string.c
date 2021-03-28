#include "headerfile.h"
/**
 * cap_string - entry point
 * @s: pointer
 * Return: s
 */
char *cap_string(char *s)
{
	char spec[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(',
			 ')', '{', '}'};
	int count;
	int count2;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count2 = 0; count2 < 14; count2++)
		{
			if (s[0] >= 'a' && s[0] <= 'z')
			{
				s[count] -= 32;
			}
			else if (s[count] == spec[count2])
			{
				count++;
				if (s[count] >= 'a' && s[count] <= 'z')
				{
					s[count] -= 32;
				}
				count--;
			}
		}
	}
	return (s);
}
