#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocates
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a =  malloc(b);
	if (a == 0)
		exit(98);
	else
		return(a);
}

