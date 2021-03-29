#include "headerfile.h"
/**
 * get_bit - returns value of bit at given index
 * @n: unsigned long int
 * @index: unsigned int
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (n == 0 || index > 64)
		return (-1);
	for (bit = 0; bit < index; bit++)
		n >>= 1;
	return (n & 1);
}
