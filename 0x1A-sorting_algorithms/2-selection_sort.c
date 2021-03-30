#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: to be sorted using selection sort algorithm
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t temp, min, a, b;

	if (array == NULL)
		return;

	if (size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		min = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[min])
				min = b;

		}
		if (min != a)
		{
			temp = array[a];
			array[a] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
