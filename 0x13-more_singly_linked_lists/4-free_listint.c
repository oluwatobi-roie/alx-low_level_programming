#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: points to lists_t list
 * Returns: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ref;


	while (head != NULL)
	{
		ref = head->next;
		free(head);
		head = ref;
	}

}
