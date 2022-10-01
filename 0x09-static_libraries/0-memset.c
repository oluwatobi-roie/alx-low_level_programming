#include "main.h"

/**
 * _memset- entry method for function
 *
 * Desctiption: function fills the first n bytes of the memory
 *              area pointed to by s with the constant byte b
 *
 * @s: character value required for function
 * @b: character value required for function
 * @n: Integer value required for function
 *
 * Return: a pointer to the memory area s
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memoryArea = s;
	char replacement = b;

	for (i = 0; i < n; i++)
		memoryArea[i] = replacement;

	return (memoryArea);
}
