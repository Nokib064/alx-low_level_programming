#include "main.h"
#include <string.h>
/**
 * _strlen - return lenght of string
 * @s: pointer valeu to be returned
 * Return: string value
 */
int _strlen(char *s)
{
	int len = 0;
	int a;

	for (a = 0; s[a] != '\0'; a++)
		len++;
	return (len);
}
