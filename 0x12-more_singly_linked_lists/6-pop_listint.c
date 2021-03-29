#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes head node from listint_t
 * @head: double pointer
 * Return: data minus head node
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int data;

	if (*head == NULL)
		return (0);
	new = *head;
	*head = (*head)->next;
	data = new->n;
	free(new);
	return (data);
}
