#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds node to beginning of list
 * @head: double pointer
 * @str: pointer
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
		new->len = i;
		new->str = strdup(str);
		new->next = *head;
		*head = new;
	return (new);
}
