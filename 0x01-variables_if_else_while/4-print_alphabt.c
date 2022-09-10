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
	char Lows = 'a';

	for (; Lows <= 'z'; Lows++)
	{
		if (Lows == 'e' || Lows == 'q')
		{
			Lows++;
		}
		putchar(Lows);
	}
	putchar('\n');

	return (0);
}
