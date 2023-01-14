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
	int i = 1, a = atoi(argv[i]), b = atoi(argv[i + 1]), result;
	char str[] = "Error";

	if (argc >= 2)
	{
		result = a * b;
		return (printf("%d\n", result));
	}
	else
	{
		printf("%s\n", str);
		return (1);
	}
}
