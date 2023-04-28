#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node begining of list_t
 * @head: pointer to structure
 * @str: string
 * Return: the address of added element, or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_N;
	unsigned int length = 0;

	new_N = malloc(sizeof(list_t));
	if (new_N == NULL)
	{
		free(new_N);
		return (NULL);
	}
	new_N->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	new_N->len = length;
	if (*head != NULL)
		new_N->next = *head;
	if (*head == NULL)
		new_N->next = NULL;
	*head = new_N;
	return (*head);
}

