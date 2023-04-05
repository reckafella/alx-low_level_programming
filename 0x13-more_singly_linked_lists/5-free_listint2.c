#include "lists.h"

/**
 * free_listint2 - a function that frees listint_t list
 * @head: first node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL;

	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
}
