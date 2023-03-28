#include "main.h"

/**
 * print_rev - prints reverse of string
 * @s: string variable
 * Return: not 0
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;
	for (a = a - 1; a <= 0; a--)
		_putchar(s[a] + '0');

	_putchar('\n');
}
