#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Function
 * @ac: argument count
 * @av: argument array
 * Return: concatenated string
 */

char *argstostr(int ac, char **av)
{
	int total_len, i, j, index;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_len = 0;
	for (i = 0; i < ac; i++)
	{
		total_len += strlen(av[i]) + 1;
	}
	str = malloc(sizeof(char) * (total_len + 1));
	if (str == NULL)
	{
		return (NULL);
	}

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[index++] = av[i][j];

		}
		str[index += 1] = '\n';

	}
	str[index += 1] = '\0';

	return (str);
}
