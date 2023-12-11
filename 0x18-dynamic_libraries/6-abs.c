#include "main.h"
/**
 * _abs - function that checks alphabet
 * @n: parameter that to be checked
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
