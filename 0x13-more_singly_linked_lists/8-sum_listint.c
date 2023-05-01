#include "lists.h"

/**
 * sum_listint - function returns sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		add = add + ptr->n;
		ptr = ptr->next;
	}

	return (add);
}
