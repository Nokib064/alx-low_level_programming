#include "main.h"

/**
 * factorial - function that return factorial of a given number
 * @n:  given number
 * Return: -1 if less than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (n);
}
