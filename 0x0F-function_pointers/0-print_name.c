#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function name
 * @name: first parameter
 * @f: pointer to function
 * Return:0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
