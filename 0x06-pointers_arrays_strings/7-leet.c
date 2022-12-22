#include "main.h"
/**
 * leet - Function that encodes a string into 1337
 * @str: string to encode
 * Return: encoded string
 */

char *leet(char *str)
{
	int itr1 = 0;
	int itr2;
	char arr[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++itr1])
	{
		for (itr2 = 0; itr2 <= 7; itr2++)
		{
			if (str[itr1] == arr[itr2] || str[itr1] - 32 == arr[itr2])
			{
				str[itr1] = itr2 + '0';
			}
		}
	}
	return (str);
}
