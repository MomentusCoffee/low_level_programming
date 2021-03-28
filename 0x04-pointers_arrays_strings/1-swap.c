#include "headerfile.h"
/**
 * swap_int - swap a and b
 * @a: int
 * @b: int
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
