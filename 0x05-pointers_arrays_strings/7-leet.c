#include "headerfile.h"
/**
 * leet - entry point
 * @s: pointer
 * Return: s
 */
char *leet(char *s)
{
	char num[5] = {'4', '3', '0', '7', '1'};
	char up[5] = {'A', 'E', 'O', 'T', 'L'};
	char low[5] = {'a', 'e', 'o', 't', 'l'};
	int count;
	int arr;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (arr = 0; arr < 5; arr++)
		{
			if (s[count] == up[arr] || s[count] == low[arr])
			{
				s[count] = num[arr];
			}
		}
	}
	return (s);
}
