#include "main.h"

/**
 * puts2 - function prints every xter of a string
 * @str: string variable
 * Return: string char
 */
void puts2(char *str)
{
	int x = 0;

	for (; str[x] != '\0'; x++)
	{
		if ((x % 2) == 0)
			_putchar(str[x]);
		else
			continue;
	}
	_putchar('\n');
}

