#include "main.h"
/**
 * _islower - prints lower lettrs
 * @c: parsmeters given
 * Return: 1 if lowerletter elso 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
		return (1);
	else
		return (0);
}
