#include "lists.h"

/**
 * add_nodeint - add a node at the beginning of a listint_t list
 * @head: pointer to the head (first node)
 * @n: numeric to add to the node
 *
 * Return: address of the new element, else return NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));

	/* Return NULL if memory allocation fails */
	if (new_node == NULL)
		return (NULL);

	/* add the value of n in the newly formed node */
	new_node->n = n;

	/* Deallocate memory if above step fails */
	if (!(new_node->n))
	{
		free(new_node);
		return (NULL);
	}

	/* If all above work correctly, make 'new_node' the head */
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
