#include "main.h"

/**
 * print_alphabet_x10 - prints letters a - z 10x
 *
 * Description: nested while loop
 *
 * Return: always void (success)
 *
*/

void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}

		putchar('\n');
		i++;
	}

	putchar('\n');
}
