#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;
	/* Find all linkedlists in array */
	for (i = 0; i < ht->size; i++)
	{
		/* Deletes each node of linkedlist */
		current = ht->array[i];
		while (current != NULL)
		{
			tmp = current->next;
			free(current->value);
			free(current->key);
			free(current);
			current = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
