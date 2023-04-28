#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the tail or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end, *b;
	size_t a;

	new_end = malloc(sizeof(list_t));
	if (new_end == NULL)
		return (NULL);

	new_end->str = strdup(str);

	for (a = 0; str[a]; a++)
		;

	new_end->len = a;
	new_end->next = NULL;
	b = *head;

	if (b == NULL)
	{
		*head = new_end;
	}
	else
	{
		while (b->next != NULL)
			b = b->next;
		b->next = new_end;
	}

	return (*head);
}

