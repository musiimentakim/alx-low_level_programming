#include "main.h"

/**
 * _strncat - Function
 * @dest: Parameter for string to append to
 * @src: Parameter for string to copy
 * @n: Number of bytes to copy
 * Description: 'function that concatenates two strings'
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int itr = 0;
	int dest_len = 0;

	while (dest[itr++])
	{
		dest_len += 1;
	}
	for (itr = 0; src[itr] && itr < n; itr++)
	{
		dest[dest_len++] = src[itr];
	}
	return (dest);
}
