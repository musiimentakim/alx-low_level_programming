#include <stdio.h>
/**
 * main - entrypoint
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int a, b, c, d;

	a = 1;
	b = 2;
	d = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
		{
			d = d + a;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%lu\n", d);
	return (0);
}
