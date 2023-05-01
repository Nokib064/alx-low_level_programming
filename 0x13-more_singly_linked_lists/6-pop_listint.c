#include "lists.h"

/**
 * pop_listint - function deletes the head of a linked list
 * @head: pointer to the first element
 *
 * Return: deleted head node data, or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int ptr_2;

	while (!head || !*head)
		return (0);

	ptr_2 = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (ptr_2);
}




