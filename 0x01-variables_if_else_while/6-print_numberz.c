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

	for (; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

	return (0);
}
