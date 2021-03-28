#include "headerfile.h"
/**
 * A function that checks for alphabetic character
 * 	Return: 1 if letter is uppercase or lowercase
 * 	Otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
