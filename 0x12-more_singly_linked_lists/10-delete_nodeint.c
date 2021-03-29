#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes node at index of listint_t
 * @head: double pointer
 * @index: unsigned int
 * Return: 1 if successful or -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new;
	listint_t *current;
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
