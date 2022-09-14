#include "main.h"

/**
 * print_alphabet - prints letters a - z
 *
 * Description: Function loops through a to z
 *
 * Return: always void (success)
 *
*/

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	putchar('\n');
}
