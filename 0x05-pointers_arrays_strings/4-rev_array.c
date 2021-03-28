#include "headerfile.h"
/**
 * reverse_array - entry point
 * @a: pointer
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int rev;
	int tmp;

	n -= 1;
	for (rev = 0; rev < n; rev++)
	{
		tmp = a[n];
		a[n] = a[rev];
		a[rev] = tmp;
		n--;
	}
}
