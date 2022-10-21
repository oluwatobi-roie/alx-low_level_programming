#include "lists.h"

/**
 * list_len - returns the numbers of elements in a list.
 * @h: singly linked list
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t listlength;

	listlength = 0;
	while (h)
	{
		h = h->next;
		listlength++;
	}
	return (listlength);
}
