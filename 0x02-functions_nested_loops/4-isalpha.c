#include "main.h"
/**
 * _isalpha - function that checks alphabet
 * @c: parameter that to be checked
 * Return: 1 if alphabet, else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
