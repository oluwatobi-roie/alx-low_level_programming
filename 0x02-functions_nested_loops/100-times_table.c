#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int i, d, multiply;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');

			for (d = 1; d <= n; d++)
			{
				_putchar(',');
				_putchar(' ');

				multiply = i * d;

				if (multiply <= 99)
					_putchar(' ');
				if (multiply <= 9)
					_putchar(' ');

				if (multiply >= 100)
				{
					_putchar((multiply / 100) + '0');
					_putchar(((multiply / 10)) % 10 + '0');
				}
				else if (multiply <= 99 && multiply >= 10)
				{
					_putchar((multiply / 10) + '0');
				}
				_putchar((multiply % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
