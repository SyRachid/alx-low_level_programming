#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint- function to add a new node to the lisint_t
 *
 * @head: the first element of node
 *
 * @n: the int to add
 *
 * Return: nothing
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
