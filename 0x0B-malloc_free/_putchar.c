#include <unistd.h>

/**
 * _putchar - function that prints out to stdout
 * @c: character to print
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
