#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - insert new node at given position
 * @head: double pointer
 * @idx: unsigned int
 * @n: int
 * Return: new list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (head == NULL && *head == NULL)
		return (NULL);
	current = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = NULL;
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
