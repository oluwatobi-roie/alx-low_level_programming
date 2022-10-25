#include "lists.h"

/**
 * add_nodeint_end - function to add new node to the list
 *
 * @head: the target element on the list
 * @n: data of the element.
 *
 * Return: address od the new node created. 
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
	}
	return(new_node);
}
