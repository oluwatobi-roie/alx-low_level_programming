#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_t - a list containing vrious elements
 * @n: integer value of first member
 * @next: pointer to the next address on the list
 *
 */

typedef struct listint_t
{
	int n;
	struct listint_t *next;
} listint_t;


size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);


#endif
