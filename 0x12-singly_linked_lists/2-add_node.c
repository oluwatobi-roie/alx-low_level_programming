#include "lists.h"

/**
 * add_node - ads a new note at the begining of the list
 * @head: head of the list
 * @str: string to be stored in the list
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_data;
	size_t character;

	new_data = malloc(sizeof(list_t));
	if (!new_data)
		return (NULL);

	new_data->str = strdup(str);

	for (character = 0; str[character]; character++)
		;

	new_data->len = character;
	new_data->next = *head;
	*head = new_data;

	return (*head);
}

