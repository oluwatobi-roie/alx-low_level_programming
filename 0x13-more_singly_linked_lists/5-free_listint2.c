#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: double pointer
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *new_point;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		new_point = *head;
		*head = new_point->next;
		free(new_point);
	}

}
