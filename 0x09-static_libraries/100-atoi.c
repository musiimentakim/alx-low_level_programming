#include "main.h"
/**
 * _atoi - Function
 * @s: parameter
 * Description: 'function that convert a string to an integer'
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int itr = 0, b = 1;
	unsigned int a = 0;

	while (s[itr] != '\0')
	{
		if ((s[itr] < '0' || s[itr] > '9') && (s[itr] == '-'))
		{
			b = b * -1;
		}
		else if ((s[itr] >= '0' && s[itr] <= '9'))
		{
			a = a * 10 + (s[itr] - '0');
			if ((s[itr + 1] < '0' || s[itr + 1] > '9'))
			{
				break;
			}
		}
		itr++;

	}
	return (a * b);
}
