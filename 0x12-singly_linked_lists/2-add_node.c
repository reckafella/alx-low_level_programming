#include "lists.h"

/**
 * add_node - a function adding a new node at the beginning of a list_t list
 * @head: double pointer to first node
 * @str: pointer to string to placed at first node
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *new_node = NULL;
	while (str[length] != '\0')
		length++;

	/* Allocate memory space for the new node */
	new_node = malloc(sizeof(list_t));

	/* return null if malloc fails */
	if (!(new_node))
		return (NULL);
	else
	{
		/* duplicate string *str to the new node */
		new_node->str = strdup(str);

		if (!(new_node->str))
			free(new_node);

		/* make new_node head */
		new_node->next = *head;
		new_node->len = length;
		*head = new_node;
	}

	return (*head);
}
