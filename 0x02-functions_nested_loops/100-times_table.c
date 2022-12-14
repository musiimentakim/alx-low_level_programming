#include "main.h"
/**
 * print_times_table - Function
 * @n: times tables to use
 * Return: void
 */

void print_times_table(int n)
{
	int x = 0, result, y;

	if (n < 0 || n > 15)
		return;
	while (x <= n)
	{
		for (y = 0; y <= n; y++)
		{
			result = x * y;
			if (y == 0)
			{
				_putchar('0' + result);
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + result);
			}
			else if (result < 100)
			{
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar('0' + result / 100);
				_putchar('0' + (result - 100) / 10);
				_putchar('0' + result % 10);
			}
			if (y < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		x++;
	}
}

