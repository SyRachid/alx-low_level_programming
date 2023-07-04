#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *listint_len- function that returns the number of elments in a listint
 *
 * @h: listint_t
 *
 * Return: the number of elements in a linked lists
 */
size_t listint_len(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
