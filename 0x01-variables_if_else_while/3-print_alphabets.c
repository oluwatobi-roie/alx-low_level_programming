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
	char Caps = 'A';
	char Lows = 'a';

	for (; Lows <= 'z'; Lows++)
	{
		putchar(Lows);
	}
	for (; Caps <= 'Z'; Caps++)
	{
		putchar(Caps);
	}

	putchar('\n');

	return (0);
}
