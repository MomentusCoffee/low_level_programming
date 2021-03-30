#include "hash_tables.h"
/**
 * key_index - Gets the index of a key
 * @key: points to a key in index
 * @size: size of array of hash table
 * Return: key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
