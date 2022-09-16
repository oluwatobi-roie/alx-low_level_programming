#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: Count of _ characters to be printed.
 */
void print_line(int n)
{
	int lineLength;

	if (n > 0)
	{
		for (lineLength = 0; lineLength < n; lineLength++)
			_putchar('_');
	}

	_putchar('\n');
}
