#include "lists.h"

/**
 * print_dlistint - prints double lnked list
 * @h: head address
 *
 * Return: list size
 */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
