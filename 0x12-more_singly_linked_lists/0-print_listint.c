#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - print elements of listint_t
 * @h: pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
