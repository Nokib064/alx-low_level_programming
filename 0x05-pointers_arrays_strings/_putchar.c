#include <unistd.h>
/**
 * _putchar - prints character
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
