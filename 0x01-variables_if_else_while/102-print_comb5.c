#include <stdio.h>

/**
 * main - Entry Point
 *
 * Author: Akomolafe Oluwatobi
 *
 * Website: https://engineertobi.com
 *
 * Description: This project seperates numbers in two
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num1 = 0;
	int num2 = 0;

	for (; num1 < 99; num1++)
	{
		for (num2 = num1 + 1; num2 < 100; num2++)
		{
			putchar(num1 / 10 + '0');
			putchar(num1 % 10 + '0');
			putchar(' ');
			putchar(num2 / 10 + '0');
			putchar(num2 % 10 + '0');

			if (num1 == 98 && num2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

