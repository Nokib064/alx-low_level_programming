#include "main.h"
/**
 * _abs - function that checks alphabet
 * @a: parameter that to be checked
 * Return: a
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
