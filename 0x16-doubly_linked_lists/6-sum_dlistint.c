#include "lists.h"
/**
 * sum_dlistint - returns sum of all data
 * @head: pointer
 * Return: sum or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; )
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
