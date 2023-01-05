#include "main.h"
/**
 * _pow_recursion - that returns the value of x raised to the power of y
 * @x: number
 * @y: power
 * Return: negative value if y is lower than 0 and positive int otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
