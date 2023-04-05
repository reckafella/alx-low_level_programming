#include "lists.h"

/**
 * add_nodeint_end - add a new node of the listint_t list
 * @head: first node
 * @n: node to add
 *
 * Return: address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *head_ptr = *head;
	listint_t *last_node = NULL;

	/* Allocate memory for the new node using malloc */
	new_node = malloc(sizeof(listint_t));

	/* check if malloc fails */
	if (!(new_node))
		return (NULL);

	/* add value of n to the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* check if the above steps succeeds */
	if (!(new_node->n))
	{
		free(new_node);
		return (NULL);
	}
	
	if (head_ptr == NULL)
		head_ptr = new_node;

	last_node = head_ptr;

	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;

	return (last_node);
}
