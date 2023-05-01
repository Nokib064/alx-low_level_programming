#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind = 0;
	listint_t *ptr = head;

	while (ptr && ind < index)
	{
		ptr = ptr->next;
		ind++;
	}

	return (ptr ? ptr : NULL);
}
