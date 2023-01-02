#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strstr - function that locates a substring
 * @haystack: first string
 * @needle: second string
 * Return: pointer to begining of located substring
 **/

char *_strstr(char *haystack, char *needle)
{
	int needle_len = strlen(needle);

	if (needle_len == 0)
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			if (strncmp(haystack, needle, needle_len) == 0)
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}


