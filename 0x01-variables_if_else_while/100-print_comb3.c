#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This project seperates numbers in two
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num1 = 0;
	int num2 = 0;

	for (; num1 < 10; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');

			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

