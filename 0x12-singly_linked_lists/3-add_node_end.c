#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_node_end - function that adds new node at the end of a list
 *
 * @head: the list of node
 *
 * @str: the string  to add
 *
 * Return: the address of list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last = malloc(sizeof(list_t));

	if (str == NULL)
	{
		return (NULL);
	}
	if (last == NULL)
		return (NULL);
	last->len = strlen(str);
	last->str = strdup(str);
	if (last->str == NULL)
	{
		free(last);
		return (NULL);
	}
	last->next = NULL;
	if (*head == NULL)
		*head = last;
	else
	{
		list_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = last;
	}
	return (last);
}
