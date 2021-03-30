#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers\
   using the Binary search algorithm
 * @array: pointer to the first element of the arry to search
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value doesn't exist or NULL, otherwise return value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t mid = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	print_array(array, low, high);

	while (low < high)
	{
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);

		else if (array[mid] < value)
		{
			low = mid + 1;
			printf("Searching in array: ");
			print_array(array, low, high);
		}
		else
		{
			high = mid - 1;
			printf("Searching in array: ");
			print_array(array, low, high);
		}
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @left: left half of array
 * @right: right half of array
 */
void print_array(const int *array, size_t left, size_t right)
{
	size_t count;

	count = left;
	for (count = left; array && count <= right; count++)
	{
		if (count > left)
			printf(", ");
		printf("%d", array[count]);
	}
	printf("\n");
}
