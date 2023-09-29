#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function  returns the number of bits needed to flip
 * to get 4rm one num to another
 * @n: bits
 * @m: number to be returned
 * Return: m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}