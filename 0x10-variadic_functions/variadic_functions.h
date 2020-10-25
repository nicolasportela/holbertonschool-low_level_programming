#ifndef VARIADIC
#define VARIADIC
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct estructura - Short description
 * @string: First member
 *
 * Description: Longer description
 */
typedef struct estructura
{
	char *st;
	void(*func)();
}reestructura;
void print_all(const char * const format, ...);
#endif
