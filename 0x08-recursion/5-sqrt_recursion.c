#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to find its square root
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int sqrt, i, result;

	if (n == 0 || n == 1)
	{
		return (n);
	}

	i = 1;
	result = 1;

	while (result <= n)
	{
		i++;
		result = i * i;
	}

	if (result == n)
	{
		return (i);
	}

	sqrt = _sqrt_recursion(n - 1);

	if (sqrt == -1)
	{
		return (-1);
	}
	if (sqrt * sqrt == n)
	{
		return (sqrt);
	}
	else
	{
		return (-1);
	}
}
