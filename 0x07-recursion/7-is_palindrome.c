#include "headerfile.h"
/**
 * _len - length of string
 * @s: pointer
 * Return: 0
 */
int _len(char *s)
{

	if (*s)
		return (_len(s + 1) + 1);
	return (0);
}
/**
 * _str - Check string for palindrome
 * @i: end check
 * @s: start check
 * Return: 1
 */
int _str(int i, char *s)
{
	if (*s)
	{
		if (*s != s[_len(s) - i])
		{
			return (0);
		}
		else
		{
			return (_str(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - palindrome
 * @s: pointer
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (_str(i, s));
}
