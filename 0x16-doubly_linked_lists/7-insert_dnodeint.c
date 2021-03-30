#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at nth position in dlistint_t
 * @h: double pointer
 * @idx: unsigned int
 * @n: int
 * Return: address of new node of NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int count;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	current = *h;
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (new);
	}
	count = 0;
	while (count < idx && current != NULL)
	{
		current = current->next;
		count++;
	}
	if (idx != count)
		return (NULL);
	if (current == NULL)
	{
		add_dnodeint_end(h, n);
		return (new);
	}
	new->next = current;
	new->prev = current->prev;
	current->prev->next = new;
	current->prev = new;
	return (new);
}
