#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node -function to add a new node at the beginning of a list_t
 *
 * @head: the list_t
 *
 * @str: string to add
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = strlen(str);
	list_t *new = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
