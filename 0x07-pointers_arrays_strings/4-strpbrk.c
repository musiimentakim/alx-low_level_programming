#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Function that searches a string for any of a set of bytes.
 * @s: string 
 * @accept: second string
 * Return: pointer to byte or null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}

