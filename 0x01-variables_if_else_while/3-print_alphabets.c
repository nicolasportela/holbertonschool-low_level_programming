#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
char a[42] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};

for (n = 0; n < 42; n++)
{
putchar(a[n]);
}
{
putchar('\n');
}
return (0);
}
