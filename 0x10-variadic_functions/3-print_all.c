#include "variadic_functions.h"

/**
 * pchar - function
 * @okvari: variable name
 * @separator: variable name
 * Return: void
 */

void pchar(char *separator, va_list okvari)
{
	printf("%s%c", separator, va_arg(okvari, int));
}

/**
 * pint - function
 * @okvari: variable name
 * @separator: variable name
 * Return: void
 */

void pint(char *separator, va_list okvari)
{
	printf("%s%i", separator, va_arg(okvari, int));
}

/**
 * pfloat - function
 * @okvari: variable name
 * @separator: variable name
 * Return: void
 */

void pfloat(char *separator, va_list okvari)
{
	printf("%s%f", separator, va_arg(okvari, double));
}

/**
 * pstring - function
 * @okvari: variable name
 * @separator: variable name
 * Return: void
 */

void pstring(char *separator, va_list okvari)
{
	char *newstring = va_arg(okvari, char *);

	if (newstring == NULL)
	{
		newstring = "(nil)";
	}
	printf("%s%s", separator, newstring);
}

/**
 * print_all - function
 * @format: variable name
 * Return: void
 */

void print_all(const char * const format, ...)
{
	reestructura arraydestructs[] = {
		{"c", pchar},
		{"i", pint},
		{"f", pfloat},
		{"s", pstring},
		{NULL, NULL}
	};
	char *separator = "";
	va_list okvari;
	int i = 0;
	int j = 0;

	va_start(okvari, format);

	while (format && format[i])
	{
		while (j < 4)
		{
			if (format[i] == arraydestructs[j].st[0])
			{
				arraydestructs[j].func(separator, okvari);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
		j = 0;
	}
	va_end(okvari);
	printf("\n");
}
