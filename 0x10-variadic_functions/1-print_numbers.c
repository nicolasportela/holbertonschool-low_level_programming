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

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, unsigned int));
			if (i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, unsigned int));
		}
	}
	printf("\n");
	va_end(list);
}
