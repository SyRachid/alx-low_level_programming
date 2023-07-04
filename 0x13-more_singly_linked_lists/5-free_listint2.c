#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_lisint2-function to free listint_t and sets the head to NULL
 *
 * @head: the head of node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	current = NULL;
}	
