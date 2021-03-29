#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - returns sum of all data from listint_t
 * @head: pointer
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		if (head == NULL)
			return (0);
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
