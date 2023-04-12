#include <stdlib.h>
#include "main.h"

/**
 * *str_concat -function to concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: NULL or to pointer to ne concat
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i = 0, j = 0, d = 0, e = 0;

	while (s1 && s1[d])
		d++;
	while (s2 && s2[e])
		e++;

	a = malloc(sizeof(char) * (d + e + 1));
	if (a == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (s1)
	{
		while (i < d)
		{
			a[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (d + e))
		{
			a[i] = s2[j];
			i++;
			j++;
		}
	}
	a[i] = '\0';

	return (a);
}

