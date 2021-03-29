#include "function_pointers.h"
/**
 * array_iterator - execute array
 * @array: int
 * @size: size_t
 * @action: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == 0 || array == NULL)
		return;
	if (action == 0 || action == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
