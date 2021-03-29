#include "headerfile.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int size;
	int index1;
	int index2;
	int count1;
	int count2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index1 = 0; s1[index1] != '\0'; index1++)
		;
	for (index2 = 0; s2[index2] != '\0'; index2++)
		;
	size = index1 + index2 + 1;
	s3 = malloc(sizeof(char) * size);
	if (s3 == NULL)
		return (NULL);
	for (count1 = 0; count1 < index1; count1++)
		s3[count1] = s1[count1];
	for (count2 = 0; count2 < index2; count2++)
		s3[count1 + count2] = s2[count2];
	s3[count1 + count2] = '\0';
	return (s3);
}
