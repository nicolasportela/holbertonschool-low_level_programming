#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
char a[26] = {"abcdefghijklmnopqrstuvwxyz"};
char A[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};

for (n = 0; n < 26; n++)
{
putchar(a[n]);
}
for (n = 0; n < 26; n++)
{
putchar(A[n]);
{
putchar('\n');
}
return (0);
}
