#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index-function that inserts a new node at given position
 * @head: the first node
 *
 * @idx: index where new node must to be add
 *
 * @n:the value of new node
 *
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *current;
	listint_t *memory;
	unsigned int i = 0;

	if (*head == NULL && idx == 0)
	{
		newnode->next = NULL;
		newnode->n = n;
		*head = newnode;
		return (newnode);
	}
	current = *head;
	while (i < idx && current != NULL)
	{
		memory = current;
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = current;
	memory->next = newnode;
	return (newnode);
}
