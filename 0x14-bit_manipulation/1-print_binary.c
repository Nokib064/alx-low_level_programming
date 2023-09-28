#include "main.h"
#include <stdio.h>
/**
 * print_binary - print binary rep of a number
 * @n: given number
 * Return: nill
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	putchar((n & 1) ? '1' : '0');
}
