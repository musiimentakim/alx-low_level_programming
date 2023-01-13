#include "main.h"
/**
 * _strcat - Function
 * @dest: parameter of string to appendto
 * @src: parameter of string to append
 * Description: 'Function to concatenate two strings'
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int itr, dest_len;

	itr = 0;
	dest_len = 0;
	while (dest[itr++])
	{
		dest_len++;
	}

	for (itr = 0 ; src[itr]; itr++)
	{
		dest[dest_len++] = src[itr];
	}
	return (dest);
}
