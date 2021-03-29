#include <stdio.h>
/**
 * main - print all arguments
 * @argc: int
 * @argv: double pointer
 * Return: 1 argument per line
 */
int main(int argc, char **argv)
{
	int count;

	argc--;
	for (count = 0; count <= argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
