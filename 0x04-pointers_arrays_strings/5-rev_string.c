#include "headerfile.h"
/**
 * rev_string - print string in reverse
 * @s: pointer
 */
void rev_string(char *s)
{
	int index;
	int count;
	int rev;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (count = 0; count < index; count++)
		{
			rev = s[count];
			s[count] = s[index];
			s[index] = rev;
		}
	}
}
