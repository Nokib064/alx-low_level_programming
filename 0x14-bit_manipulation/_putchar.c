#include <unistd.h>
/**
 * _putchar - function writes to std error
 * Return: function parameters
 */
int _putchar(char c)
{
	return (write (1, &c, 1));

}
