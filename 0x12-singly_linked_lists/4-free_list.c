#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_list -function that frees a list_t list
 *
 * @head: a list of list_t that must to be free
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
