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
	char Lows = 'z';

	for (; Lows >= 'a'; Lows--)
	{
		putchar(Lows);
	}
	putchar('\n');

	return (0);
}
