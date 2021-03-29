#include "lists.h"
#include <stdio.h>
/**
 * free_listint - free listint_t
 * @head: pointer
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
