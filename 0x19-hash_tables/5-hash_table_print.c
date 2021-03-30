#include "hash_tables.h"
/**
 * hash_table_print - Prints hash table
 * @ht: hash table
 * Return: Print hash table, if NULL print nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new;
	unsigned long int index;
	int i = 0;

	if (ht == NULL)
		return;
	printf("{");
	/* Finds all linkedlists in array */
	for (index = 0; index < ht->size; index++)
	{
		new = ht->array[index];
		/* Finds all keys/values in linkedlists */
		while (new != NULL)
		{
			/* Check to place comma starting after first node of linkedlist  */
			if (i == 1)
				printf(", ");
			printf("'%s': '%s'", new->key, new->value);
			i = 1;
			new = new->next;
		}
	}
	printf("}\n");
}
