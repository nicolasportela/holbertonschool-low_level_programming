#include <stdio.h>

/**
 * main - print fizzbuzz
 *
 * Return: always 0.
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (((a % 3) == 0) && ((a % 5) == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((a % 5) == 0)
		{
			if (a == 100)
			{
				printf("Buzz\n");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%i ", a);
		}
	}
	return (0);
}
