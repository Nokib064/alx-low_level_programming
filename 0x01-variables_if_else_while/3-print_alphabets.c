#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 always
 */
int main(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
		putchar(j);
	for (j = 'A' ; j <= 'Z' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
