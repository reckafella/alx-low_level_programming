#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 * @head: first node
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *ptr = NULL;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
