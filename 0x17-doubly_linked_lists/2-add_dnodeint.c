#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of list
 * @head: pointer to first node
 * @n: integer data to add to the new node
 *
 * Return: address of the new element or NULL on failure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (new_node->n)
	{
		new_node->next = (*head);
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
