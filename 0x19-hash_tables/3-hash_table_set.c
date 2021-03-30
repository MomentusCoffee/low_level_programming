#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to hash table
 * @ht: hash table where key/value is added/updated
 * @key: key to locate position of value
 * @value: value associated with key
 * Return: 1 if successful or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	/* Check if key exist. If it does, update value */
	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];
	while (new)
	{
		if (strcmp(key, new->key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			return (1);
		}
		new = new->next;

	}
	/* If key doesn't exist, create new node with key and value */
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	/* If array is point to NULL at index, create node at beginning */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	/* Handle collision */
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
