#include "lists.h"
/**
 * add_dnodeint_end - add new node to end of dlistint_t
 * @head: double pointer
 * @n: int
 * Return: element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	current = *head;
	if (current == NULL)
	{
		new->next = current;
		*head = new;
		new->prev = NULL;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
		new->next = NULL;
	}
	return (new);

}
