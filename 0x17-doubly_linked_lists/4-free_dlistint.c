#include "lists.h"

/**
 * free_dlistint - free list
 * @head: first node
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	head = NULL;
}
