#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0(Success)
 *
*/
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
	{
		if (num != 9)
		{
			putchar(num + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(num + '0');
		}
	}
	return (0);

}
