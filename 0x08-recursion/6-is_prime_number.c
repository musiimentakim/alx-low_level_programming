#include "main.h"
/**
 * is_prime_number - function that checks if number is prime
 * @n: number
 * Return: 1 if success and 0 other wise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}

	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}

	return (is_prime_number_recursion(n, 5));
}

/**
 * is_prime_number_recursion - function that checks if number is prime
 * @n: number
 * @i: itvr
 * Return: 1 if success and 0 other wise
 */


int is_prime_number_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0 || n % (i + 2) == 0)
	{
		return (0);
	}

	return (is_prime_number_recursion(n, i + 6));
}

