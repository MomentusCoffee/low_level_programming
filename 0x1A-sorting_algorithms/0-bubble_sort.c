#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * @array: Array to be sorted using bubble sort algorithm
 * @size: Size of array
 * Return: Sorted array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t elem;
	int temp;

	if (array == NULL)
		return;

	/* Compares 2 integers in array */
	for (i = 0; ((array[i] < array[i + 1]) || array[i + 1]) != '\0'; i++)
	{
		/* Compare until last element of array is reached  */
		for (elem = 0; elem < size - 1; elem++)
		{
			if (array[elem] > array[elem + 1])
			{
				temp = array[elem];
				array[elem] = array[elem + 1];
				array[elem + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
