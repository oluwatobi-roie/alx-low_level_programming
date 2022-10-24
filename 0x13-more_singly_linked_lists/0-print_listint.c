#include "lists.h"

/**
 * print_listint - prints content of a list
 * @h: header address of first element on the list
 *
 * Return: returns the total amount of element in the list
 *
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
