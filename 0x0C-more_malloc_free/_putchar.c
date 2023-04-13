#include <unistd.h>

/**
 * _putchar - function prints to stdout
 * @c: char to print
 *
 * Return: 1 on success 0 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
