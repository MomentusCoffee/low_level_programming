#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer
 * @size: int
 * @cmp: pointer
 * Return: 0 if matched and -1 if not or is less than 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
				return (x);
		}
	}
	return (-1);
}
