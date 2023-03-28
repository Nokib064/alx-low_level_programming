#include "main.h"

/**
 * rev_string - function that reverse string
 * @s: string varible
 * Return: string value
 */
void rev_string(char *s)
{
	char re = s[0];
	int a = 0;
	int b;

	while (s[a] != '\0')
		a++;
	for (b = 0; b < a; b++)
	{
		a--;
		re = s[b];
		s[b] = s[a];
		s[a] = re;
	}
}


