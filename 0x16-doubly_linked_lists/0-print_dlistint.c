#include "lists.h"
/**
 * print_dlistint - prints all the elements of dlistint
 * @h: pointer
 * Return: elements & number of elements in dlistint
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
