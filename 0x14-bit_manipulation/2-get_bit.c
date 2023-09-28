#include <stdio.h>

/**
 * get_bit - function gets value of a bit at given index
 * @n: bit
 * @index: given index
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8;
	unsigned long int mask;
	unsigned long int bit;

	if (index >= size)
	{
		return (-1);
	}

	mask = 1UL << index;
	bit = (n & mask) >> index;

	return ((int)bit);
}
