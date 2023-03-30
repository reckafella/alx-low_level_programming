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

	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%i] (nil)\n", ptr->len);
		else
			printf("[%i] %s\n", ptr->len, ptr->str);

		ptr = ptr->next;

		num_elements++;
	}

	return (num_elements);
}
