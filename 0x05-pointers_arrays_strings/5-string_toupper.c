#include "headerfile.h"
/**
 * string_toupper - entry point
 * @up: pointer
 * Return: 0
 */
char *string_toupper(char *up)
{
	int str;
	char *start = up;

	for (str = 0; up[str] != '\0'; str++)
	{
		if ((up[str] >= 'a') && (up[str] <= 'z'))
		{
			up[str] -= 32;
		}
	}
	return (start);

}
