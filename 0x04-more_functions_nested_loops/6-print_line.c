#include "main.h"
/**
 * print_line - Function
 * @n: Number of underscore to print
 * Description: 'draws a straight line in the terminal'
 * Return: None
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
