#include "lists.h"
#include <stddef.h>
/**
 * list_len- function that returns the number of elements in a linked ls
 *
 * @h:list_t structure
 *
 * Return:the number of elements of list_t
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
