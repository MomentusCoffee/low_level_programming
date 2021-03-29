#include "lists.h"
#include <stdio.h>
/**
 * listint_len - return number of elements in listint_t
 * @h: pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
