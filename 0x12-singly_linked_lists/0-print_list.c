#include "lists.h"
#include <stdio.h> 

/**
 * print_list - prints all the element of a list_t structurelist
 * @h: the list of elements
 *
 * Return: the total numbers of nodes in h
 */

size_t print_list(const list_t *h)
{
	size_t node_id = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		node_id++;
		h = h->next;
	}

	return (node_id);
}

