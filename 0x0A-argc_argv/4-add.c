#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function
 * @argc: program argument count
 * @argv: array of pointers to strings (program arguments)
 * Return: multiple for success or any positive integer otherwise
 */

int main(int argc, char **argv)
{
	int i = 1, a, result = 0;

	if (argc >= 2)
	{
		while (i < argc)
		{
			a = atoi(argv[i]);
			if (a >= 0 && a <= 1000)
			{
				result += a;
				i++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
