#include "hash_tables.h"
/**
 * hash_table_get - Retrieves value associated with a key
 * @ht: hash table to search for key
 * @key: the key pointing to value being sought
 * Return: value or NULL if key doesn't exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];
	/* Checks if key exist and returns value */
	if (new == NULL)
		return (NULL);
	while (new)
	{
		if (strcmp(key, new->key) == 0)
			return (new->value);
		new = new->next;
	}
	return (NULL);
}
