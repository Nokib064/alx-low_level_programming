#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function to print string using recursion
 * @s: string pointer
 * Return: rc value
 */
void _puts_recursion(char *s)
{
	if (!(*s == '\0'))
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
