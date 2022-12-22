#include "main.h"
/**
 * cap_string - Function that capitalizes all words of a string
 * @str: string to capitalize
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int itr = 0, lst_idx;

	while (str[++itr])
	{
		while (!(str[itr] >= 'a' && str[itr] <= 'z'))
		{
			itr = itr + 1;
		}

		lst_idx = itr - 1;
		if (str[lst_idx] == ' ' || str[lst_idx - 1] == '\t' ||
				str[lst_idx - 1] == '\n' ||
				str[lst_idx - 1] == ',' ||
				str[lst_idx - 1] == ';' ||
				str[lst_idx - 1] == '.' ||
				str[lst_idx - 1] == '!' ||
				str[lst_idx - 1] == '?' ||
				str[lst_idx - 1] == '"' ||
				str[lst_idx - 1] == ')' ||
				str[lst_idx - 1] == '(' ||
				str[lst_idx - 1] == '{' ||
				str[lst_idx - 1] == '}')
			str[itr] = str[itr] - 32;
	}
	return (str);
}
