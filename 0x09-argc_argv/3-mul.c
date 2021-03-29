#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - multiple 2 numbers
 * @argc: int
 * @argv: double pointer
 * Return: result
 */
int main(int argc, char **argv)
{
	int num1 = 1;
	int num2 = 2;
	int res = 0;

	if (argc > 1 && argc < 4)
	{
		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
		res = atoi(argv[num1]) * atoi(argv[num2]);
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
