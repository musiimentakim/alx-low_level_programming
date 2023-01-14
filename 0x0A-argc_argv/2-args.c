#include <stdio.h>

/**
 * main - Function
 * @argc: program argument count
 * @argv: array of pointers to strings (program arguments)
 * Return: Always 0 success or any positive integer otherwise
 */

int main(int argc, char **argv)
{
	int i = 0;

	if (argc > 0)
	{
		for (; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
