#include "3-calc.h"
/**
 * main - entry point
 * @argc: int
 * @argv: double pointer
 * Return: sum
 */
int main(int argc, char **argv)
{
	int num1;
	int num2;
	int sum;

	int (*fun)(int, int); /* pointer function to connect get_op_func */

	if (argc != 4) /* number of elements in argv. argc = 4 is argv[3]. argv[0] = name, argv [1] = num1, argv[2] = operator, argv [3] = num2 */
	{
		printf("Error\n");
		exit(98);
	}

	fun = get_op_func(argv[2]); /* points to function get_op_func and places the operator found in struct op_t ops */
	if (!fun || argv[2][1] != '\0') /* argv[2][1] checks position in array 2 if more than 1 element in operator position */
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') &&  num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	sum = fun(num1, num2);
	printf("%d\n", sum);

	return (0);
}
