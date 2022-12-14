#include "main.h"
/**
 * _isalpha - Function
 * @c: Int parameter
 * Description: 'checks for alphabetic character'
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
