#include "lists.h"

/**
 * free_listint2 - function frees a linked list and sets head to NULL
 * @head: pointer to linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (head == NULL)
		return;

	while (*head != NULL)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

	*head = NULL;
}
