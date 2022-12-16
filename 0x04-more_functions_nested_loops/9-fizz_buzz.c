#include <stdio.h>

/**
 * main - Entrypoint
 * Description: 'Fizz buzz'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			if (num % 3 == 0)
			{
				printf("Fizz");
			}
			if (num % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", num);
		}
		if (num != 100)
		{
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
