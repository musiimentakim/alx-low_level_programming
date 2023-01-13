#include "main.h"
/**
 * *_strcpy - Function
 * @dest: destination parameter
 * @src: source parameter
 * Description: 'function copies the string pointed to by src'
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int iterator;

	for (iterator = 0; src[iterator]; iterator++)
	{
		dest[iterator] = src[iterator];
	}
	dest[iterator] = src[iterator];
	return (dest);
}
