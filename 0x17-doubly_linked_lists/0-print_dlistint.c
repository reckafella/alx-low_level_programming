#include "lists.h"

/**
 * print_dlistint - print all elements of a doubly linked list
 * @h: pointer to first node
 *
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *headptr = h;

	while (headptr != NULL)
	{
		printf("%d\n", headptr->n);
		headptr = headptr->next;
		count++;
	}
	return (count);
}
