#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - passwd
 *
 * Return: Always 0
 */

int main(void)
{
	int a, num, sum;
	char str[100];

	a = 0;
	num = 0;
	sum = 0;

	srand(time(NULL));

	for (a = 0; sum <= 2644; a++)
	{
		num = (rand() % 25) + 65;

		str[a] = num;

		sum = sum + num;
	}

	str[a++] = 2772 - sum;
	str[a++] = '\0';

	printf("%s\n", str);

	return (0);
}
