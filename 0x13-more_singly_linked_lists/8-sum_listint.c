#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint- function that returns the sum of all the data (n)
 *
 * @head: the first node
 *
 * Return: the value of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
