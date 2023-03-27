#include "main.h"
/**
 * swap_int - swaps value btw two variable
 * @a: first varible
 * @b: second varible
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
