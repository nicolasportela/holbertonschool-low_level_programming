#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function
 * @n: variable name
 * @separator: variable name
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(list, unsigned int));
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
