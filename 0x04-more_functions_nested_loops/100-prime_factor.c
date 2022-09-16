#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long prime_numbers = 612852475143, div;

	while (div < (prime_numbers / 2))
	{
		if ((prime_numbers % 2) == 0)
		{
			prime_numbers /= 2;
			continue;
		}

		for (div = 3; div < (prime_numbers / 2); div += 2)
		{
			if ((prime_numbers % div) == 0)
				prime_numbers /= div;
		}
	}

	printf("%ld\n", prime_numbers);

	return (0);
}
