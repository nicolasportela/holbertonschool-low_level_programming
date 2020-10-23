#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function
 * @n: variable name
 * @separator: variable name
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	if (separator != NULL)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			s = va_arg(list, char *);
			if (s != NULL)
			{
				printf("%s", s);
				if (i < (n - 1))
				{
					printf("%s", separator);
				}
			}
			else
			{
				printf("(nil)");
			}
		}
		printf("\n");
		va_end(list);
	}
}
