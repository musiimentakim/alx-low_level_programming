#include <stdio.h>

/**
 * main - Entrypoint
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i, num, num2, num3, numa, numb, numc, numd;

	num2 = 1;
	num3 = 2;
	num = 1000000000;

	printf("%lu", num2);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", num3);
		num3 = num3 + num2;
		num2 = num3 - num2;
	}

	numa = num2 / num;
	numb = num2 % num;
	numc = num3 / num;
	numd = num3 % num;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", numc + (numd / num));
		printf("%lu", numd % num);
		numc = numc + numa;
		numa = numc - numa;
		numd = numd + numb;
		numb = numd - numb;
	}
	printf("\n");
	return (0);
}
