#include "headerfile.h"
/**
 * flip_bits - return number of bits to flip numbers
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number of bits to flip numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0;
	unsigned long int bit;

	bit = n ^ m;
	while (bit)
	{
		if (bit & 1)
			i++;
		bit >>= 1;
	}
	return (i);
}
