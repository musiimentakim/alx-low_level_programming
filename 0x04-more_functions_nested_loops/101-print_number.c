#include "main.h"
/**
 * print_number - Function
 * @n: Parameter
 * Description: 'function that prints an integer.'
 * Return: None
 */

void print_number(int n)
{
	unsigned int a;
	int b, c;

	c = 10;

	if (n < 10 && n >= 0)
	{
		_putchar(n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar('-');
		_putchar(n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}
		a = n;
	while (a / c > 9)
	{
		c = c * 10;
	}
	while (c > 0)
	{
		b = a / c;
		a = a % c;
		_putchar(b + '0');
		c = c / 10;
	}
	}
}

