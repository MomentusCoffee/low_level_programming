#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node in list
 * @head: pointer
 * @index: unsigned int
 * Return: node if it exist or NULL if not
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new;
	unsigned int i;

	new = head;
	if (new == NULL)
		return (NULL);
	for (i = 0; new != NULL; i++)
	{
		if (i == index)
			return (new);
		new = new->next;
	}
	return (new);
}
