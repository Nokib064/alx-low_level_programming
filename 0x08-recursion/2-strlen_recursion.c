#include "main.h"

/**
 * _strlen_recursion - function to return lenght of string
 * @s: string pointer
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	return (*s ? 1 + _strlen_recursion(s + 1) : 0);

}
