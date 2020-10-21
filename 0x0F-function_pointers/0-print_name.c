#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function
 * @name: variable name
 * @f: variable name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
