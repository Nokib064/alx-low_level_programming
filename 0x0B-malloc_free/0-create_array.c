#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function to create and initilizes it
 * @size: size of array
 * @c: char array
 *
 * Return: null
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	a = malloc(size);
	if (size == 0 || a == 0)
	{
		return (NULL);
	}
	while (size--)
		a[size] = c;
	return (a);
}
