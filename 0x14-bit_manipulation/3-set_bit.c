#include <stdio.h>
#include "main.h"

/**
 * set_bit - function set bit to 1 at given index
 * @n: bit
 * @index: given index
 * Return: 1 if it worked, else -1;
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8;
	unsigned long int mask;

	if (index >= size)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;

	return (1);
}


