#include "main.h"
/**
 * _strncpy - Function
 * @dest: parameter to append to
 * @src: parameter of string to copy
 * * @n: number of bytes to copy
 * * Description: 'function that copies a strings'
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int itr;

	for (itr = 0; itr < n && src[itr] != '\0'; itr++)
	{
		dest[itr] = src[itr];
	}
	for (; itr < n; itr++)
	{
		dest[itr] = '\0';
	}
	return (dest);
}
