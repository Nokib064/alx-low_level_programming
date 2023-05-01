#include "lists.h"

/**
 * listint_len - function return number of elements in list
 * @h: linked list to be returned
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != 0)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
