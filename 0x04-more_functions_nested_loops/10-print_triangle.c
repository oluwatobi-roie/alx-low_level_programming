#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int a, start;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (start = size - a; start > 0; start--)
				_putchar(' ');

			for (start = 0; start < a; start++)
				_putchar('#');

			if (a == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}



