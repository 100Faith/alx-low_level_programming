#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer
 *
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	int i;
	const list_t *c = h;

	for (i = 0; c != NULL; i++)
	{
		c = c->next;
		len++;
	}
	return (len);
}
