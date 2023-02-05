#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concantinates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: amount of s2 to copy
 * Return:pointer to the newly concantenated string on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int itr, a, b;

	a = 0;
	b = 0;
	if (s1)
	{
		for (; s1[a]; a++)
		{
		}
	}
	if (s2)
	{
		for (; s2[b]; b++)
		{
		}
	}
	if (!(n >= b))
	{
		b = n;
	}

	string  = malloc(sizeof(char) * (a + b) + 1);
	if (!string)
	{
		return (NULL);
	}
	for (itr = 0; itr < (a + b); itr++)
	{
		if (itr < a)
		{
			string[itr] = s1[itr];
		}
		else
		{
			string[itr] = s2[itr - a];
		}
	}
	string[itr] = '\0';
	return (string);
}
