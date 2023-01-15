#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function
 * @str: string copy
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(strlen(str) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}

