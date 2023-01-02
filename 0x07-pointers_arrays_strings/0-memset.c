#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes in memory to fill
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itvr;

	for (itvr = 0; itvr < n; itvr++)
	{
		s[itvr] = b;
	}
	return (s);
}
