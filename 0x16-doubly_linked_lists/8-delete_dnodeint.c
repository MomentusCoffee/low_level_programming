#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at nth position
 * @head: double pointer
 * @index: int
 * Return: 1 if successful, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new;
	dlistint_t *current;
	unsigned int i;

	current = *head;
	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	new = current->next;
	current->next = new->next;
	free(new);
	return (1);
}
