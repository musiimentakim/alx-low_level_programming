#include <stdio.h>

/**
 * main - Entrypoint
 * Return: Always 0 (success)
 */

int main(void)
{
	long int a, b, c, d;

	b = 1;

	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		d = b + c;
		b = c;
		c = d;
	}
	return (0);
}
