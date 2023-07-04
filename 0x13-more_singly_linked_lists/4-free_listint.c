#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint- function that frees a linsint_t
 *
 * @head: listint_t
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
