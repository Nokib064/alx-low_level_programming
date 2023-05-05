#include <unistd.h>

/**
 * _putchar - function prints to std output
 * c: char  variable
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
