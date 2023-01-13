#include "main.h"
/**
 * _isdigit - Function
 * @c: Value to check for digit status
 * Description: 'function checks for a digit 0 through 9
 * Return: 1 for success and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
