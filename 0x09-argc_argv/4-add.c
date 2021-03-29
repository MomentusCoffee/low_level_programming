#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: int
 * @argv: double pointer
 * Return: result
 */
int main(int argc, char **argv)
{
	int num;
	int sum;
	int str;

	if (argc > 1)
	{
		for (num = 1; num < argc; num++)
		{
			sum += atoi(argv[num]);
			for (str = 0; argv[num][str] != '\0'; str++)
			{
				if (!isdigit(argv[num][str]))
				{
					printf("Error\n");
					return (1);
				}
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
