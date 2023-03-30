#include "lists.h"

/**
 * print_list - a function that prints all elements of a list_t list
 * @h: head of the linked linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");

		printf("%s\n", h->str);

		h = h->next;
		num_elements++;
	}

	return (num_elements);
}
