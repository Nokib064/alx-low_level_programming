#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements list
 * @h: pointer to structure
 * Return: length of elements
 */

size_t list_len(const list_t *h)
{

	unsigned int a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}

