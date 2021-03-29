#include "lists.h"
#include <stdio.h>
/**
 * free_list - free list
 * @head: pointer
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
