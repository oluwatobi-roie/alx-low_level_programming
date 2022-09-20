#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int length = 0, index = 0;
	char i;

	while (s[index++])
		length++;

	for (index = length - 1; index >= length / 2; index--)
	{
		i = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = i;
	}
}
