#include "lists.h"

/**
 * add_nodeint - adds a new node to te list
 * @head: pointer to the pointer of the refrenced head
 * @n: new entry of n for the list
 *
 * Return: returns the address of the new node added
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return NULL;

	new_node = malloc(sizeof(listint_t));
	
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

