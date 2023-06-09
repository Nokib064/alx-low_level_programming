#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function returns pointer to duplicate of a string
 * @str: duplicate of the string
 *
 * Return: null
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int b, c;

	b = 0;
	c = 0;

	if (str == NULL)
		return (NULL);

	while (str[c])
		c++;
	a = malloc(sizeof(char) * (c + 1));

	if (a == NULL)
		return (NULL);

	while (!(a[b] = str[b]) == '\0')
		b++;

	return (a);
}

