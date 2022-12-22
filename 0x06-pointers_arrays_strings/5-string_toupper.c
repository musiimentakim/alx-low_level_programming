#include "main.h"
/**
 * string_toupper - Function that changes all lowercase to uppercase
 * @str: string to transform to uppercase
 * Return: String in uppercase
 */

char *string_toupper(char *str)
{
	int itr = 0;

	while (str[itr++])
	{
		if (str[itr] >= 'a' && str[itr] <= 'z')
		{
			str[itr] = str[itr] - 32;
		}

	}
	return (str);
}
