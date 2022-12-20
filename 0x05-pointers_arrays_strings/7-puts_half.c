#include "main.h"
/**
 * puts_half - Function
 * @str: Parameter
 * Description: 'function that prints half th estring'
 * Return: None
 */

void puts_half(char *str)
{
	int i = 0, n = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (n % 2 == 1)
	{
		n = (i - 1) / 2;

		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}

	}

	else
	{	n = (i / 2);

		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
