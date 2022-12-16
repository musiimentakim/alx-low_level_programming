#include "main.h"
#include <ctype.h>

/**
 * _isupper - Function
 * @c: character to check for case type
 * Description: 'checks whether a character is upper case'
 * Return: 1 for success and 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
