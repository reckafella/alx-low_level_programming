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

	/* Allocate memory for the new node using malloc */
	new_node = malloc(sizeof(listint_t));

	/* check if malloc fails */
	if (!(new_node))
		return (NULL);

	/* add value of n to the new node */
	new_node->n = n;

	/* check if the above steps succeeds */
	if (!(new_node->n))
	{
		free(new_node);
		return (NULL);
	}

	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		while (head_ptr->next)
			head_ptr = head_ptr->next;
		head_ptr->next = new_node;
	}

	return (new_node);
}
