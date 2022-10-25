#include "lists.h"

/**
 * betty style here
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node;

	last_node = malloc(sizeof(listint_t));

	while (*head)
	{
		if (head->next == NULL)
		{
			last_node->n = n;
			head->next = last_node;
			last_node->next = NULL;
		}
		*head = head->next;
	}
}
