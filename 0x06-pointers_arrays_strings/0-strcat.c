#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * *_strcat - Function
 * @dest: Destination parameter
 * @src: String to append
 * Description: 'function that concatenates two strings'
 * Return: Char
 */
char *_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t itr;

	for (itr = 0; src[itr] != '\0'; ++itr)
	{
		dest[dest_len + itr] = src[itr];
	}
	dest[dest_len + itr] = '\0';
	return (dest);
}
