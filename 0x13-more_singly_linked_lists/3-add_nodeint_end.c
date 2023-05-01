#include "lists.h"

/**
 * add_nodeint_end - inserts a node at the end of a linked list
 * @head: poins to first element
 * @n: new node to be inserted
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;

	new_node = malloc(sizeof(listint_t));
	while (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (ptr->next)
		ptr = ptr->next;

	ptr->next = new_node;

	return (new_node);
}
