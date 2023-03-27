#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a tring and return a newline
 * @str: string literal
 * Return: string value
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
