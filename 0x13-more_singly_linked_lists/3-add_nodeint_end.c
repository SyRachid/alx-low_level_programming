#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end- function to adss a new node at the end of a list
 *
 * @head: listint_t
 *
 * @n: int ot add
 *
 * Return: the address of node to add
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = node;
	}
	return (node);
}
