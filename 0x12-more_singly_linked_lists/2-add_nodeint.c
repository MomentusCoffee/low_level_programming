#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_nodeint - add node to beginning of list
 * @head: double pointer
 * @n: int
 * Return: new
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		new->next = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
