#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint- function that prints all the elements of a listint_t
 *
 *
 * @h: listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
