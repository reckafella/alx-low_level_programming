#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked
 * list_t list
 * @h: head of the linked list
 *
 * Return: size_t - (number of elements)
 */

size_t list_len(const list_t *h)
{
	size_t number_of_elements = 0;

	while (h != NULL)
	{
		number_of_elements++;
		h = h->next;
	}

	return (number_of_elements);
}
