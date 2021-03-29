#include <stdio.h>
/**
 * main - display number of arguments
 * @argc: int
 * @argv: double pointer
 * Return: argc
 */
int main(int argc, char **argv)
{
	int count = 0;

	argc--;
	if (argc <= *argv[count])
		printf("%d\n", argc);
	return (0);
}
