#include "headerfile.h"
/**
 * clear_bit - set bit value to 0 in index
 * @n: pointer
 * @index: unsigned int
 * Return: 1 if successful, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit;

	bit = (sizeof(unsigned long int) * 8);
	if (index > bit)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
