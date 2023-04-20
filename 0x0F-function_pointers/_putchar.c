#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: char parameter to be passed
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
