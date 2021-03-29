#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - return the number of elements in list_t
 * @h: pointer
 * Return: list length
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
