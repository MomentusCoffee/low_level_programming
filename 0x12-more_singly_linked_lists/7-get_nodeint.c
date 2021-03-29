#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns nth node in listint_t
 * @head: pointer
 * @index: unsigned int
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	current = head;
	if (current == NULL)
		return (NULL);
	for (i = 0; i != index; i++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	return (current);
}
