#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0 success  or negative argument ,positive intgr othrwse
 */

int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else  if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}

	cents = atoi(argv[1]);

	while (cents >= 25)
	{
		cents -= 25;
		coins++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		coins++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		coins++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		coins++;
	}
	while (cents >= 1)
	{
		cents -= 1;
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
