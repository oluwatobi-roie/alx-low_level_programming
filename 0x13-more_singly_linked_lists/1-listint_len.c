#include "lists.h"

/**
 * listint_len - print the length of a list
 * @h: address to the head file
 * Return: returns the total count of list
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while(h)
	{
		n++;
		h = h->next;
	}

	return n;
}
