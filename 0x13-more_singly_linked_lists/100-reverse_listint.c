#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *ptr2 = NULL;

	while (*head != NULL)
	{
		ptr2 = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = ptr2;
	}

	*head = ptr;

	return (*head);
}
