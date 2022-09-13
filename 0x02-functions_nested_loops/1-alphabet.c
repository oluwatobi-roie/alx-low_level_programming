#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: main function description
 *
 * Return: Always 0 (Success)
 *
*/

void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);

}

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
		putchar(letter);
		letter++;
	}

	putchar('\n');
}
