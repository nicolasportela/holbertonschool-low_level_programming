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

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(list, n);
	for (i = 0; i < (n - 1); i++)
	{
		s = va_arg(list, char *);
		if (s == NULL)
		{
			s = "(nil)";
		}
		if (separator != NULL)
		{
			printf("%s%s", s, separator);
		}
		else
		{
			printf("%s", s);
		}
	}
	s = va_arg(s, char *);
	if (s == NULL)
	{
		s = "(nil)";
	}
	printf("%s\n", s);
	va_end(list);
}
