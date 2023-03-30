#include "lists.h"

/**
 * add_node_end - a function adding a new node at the end of a list_t list
 * @head: double pointer to first node
 * @str: pointer to string to placed at first node
 *
 * Return: address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *last_node = NULL;
	unsigned int length = 0;

	while (str[length] != '\0')
		length++;

	/* Allocate space for the new node */
	new_node = malloc(sizeof(list_t *));

	/* return null if malloc fails */
	if (!(new_node))
		return (NULL);

	/* duplicate string *str to the new node */
	new_node->str = strdup(str);

	if (!(new_node->str))
		free(new_node);

	new_node->len = length;
	new_node->next = NULL;

	/* make new_node head */
	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (last_node);
}
