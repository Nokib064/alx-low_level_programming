#include "main.h"
/**
 * print_last_digit - function that checks alphabet
 * @i: parameter that to be checked
 * Return: k
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
