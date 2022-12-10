#include <stdio.h>
/**
 * main - Entrypoint
 * Description: 'print out numbers 0 to 9'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number += 1;

	}
	printf("\n");
}
