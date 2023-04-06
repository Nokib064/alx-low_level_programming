#include "main.h"

/**
 * _pow_recursion - function that returned value of a power
 * @x: value to be raised to a certain power
 * @y: value of power
 * Return: -1 if less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}

}
