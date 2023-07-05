#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index-function that returns the nth node of a list
 *
 * @head: the first node
 *
 * @index: the index of the node
 *
 * Return: the node  wich in the index ;
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
