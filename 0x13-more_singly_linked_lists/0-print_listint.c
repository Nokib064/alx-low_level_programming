#include "lists.h"

/**
 * print_listint - function prints all elements of a list
 * @h: linked list to be printed
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
