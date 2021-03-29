#include "headerfile.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenate
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: n
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int index1;
	unsigned int index2;
	unsigned int count1;
	unsigned int count2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index1 = 0; s1[index1] != '\0'; index1++)
		;
	for (index2 = 0; s2[index2] != '\0'; index2++)
		;
	if (n >= index2)
		s3 = malloc(sizeof(char) * (index1 + index2 + 1));
	else
		s3 = malloc(sizeof(char) * (index1 + n + 1));
	if (s3 == NULL)
		return (NULL);

	for (count1 = 0; count1 < index1; count1++)
		s3[count1] = s1[count1];
	for (count2 = 0; count2 < index2 && count2 < n ; count2++, count1++)
		s3[count1] = s2[count2];
	s3[count1] = '\0';
	return (s3);
}
