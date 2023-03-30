#include "main.h"

/**
 * string_toupper - function that changes lowercase of string to uppercase
 * @n: pointer
 * Return: whatever
 */

char *string_toupper(char *n)
{
	int b;

	b = 0;
	while (n[b] != '\0')
	{
		if (n[b] >= 'a' && b <= 'z')
			n[b] = n[b] - 32;
		b++;
	}
	return (n);
}
