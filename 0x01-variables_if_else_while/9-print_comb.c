#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

for (n = '0'; n <= '9'; n++)
if (n <= '8')
{
putchar(n);
}
{
putchar(',');
}
{
putchar(' ');
}
else if (n == '9')
{
putchar(n);
}
return (0);
}
