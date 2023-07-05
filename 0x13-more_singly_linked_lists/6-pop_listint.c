#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint- function that deletes the head node of a listint_t
 *
 * @head: the listint_t head
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (*head == NULL)
		return (0);
	node = *head;
	n  = node->n;
	*head = (*head)->next;
	free(node);
	return (n);
}
