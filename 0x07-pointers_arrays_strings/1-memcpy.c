#include "main.h"
/**
 * _memcpy - Function that copies memory area.
 * @dest: memory area to copy text to
 * @src: memory area to copy text from
 * @n: number of bytes to copy from src
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itvr;

	for (itvr = 0; itvr < n; itvr++)
	{
		dest[itvr] = src[itvr];
	}
	return (dest);
}
