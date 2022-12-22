#include "main.h"
/**
 * _strcmp - Function that compares two strings
 *@s1: string to compare
 *@s2: string to compare
 *Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int itr = 0;
	int cmp = 0;
	char null = '\0';

	while (1)
	{
		if (s2[itr] == null && s1[itr] == null)
		{
			break;

		}
		else if (s1[itr] != s2[itr])
		{
			cmp = s1[itr] - s2[itr];
		}
		else if (s1[itr] == null)
		{
			cmp = s2[itr];
			break;
		}
		else if (s2[itr] == null)
		{
			cmp = s1[itr];
			break;
		}
		else
		{
			itr = itr + 1;
		}
	}
	return (cmp);
}
