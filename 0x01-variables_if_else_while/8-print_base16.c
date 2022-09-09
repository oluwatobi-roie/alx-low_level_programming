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
	char letter = 'a';

	for (; num < 10; num++)
		putchar(num + '0');
	for (; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);

}
