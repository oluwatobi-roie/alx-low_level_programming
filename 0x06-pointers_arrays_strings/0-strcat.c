#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	do {
		dest_len++;
	} while (dest[i++]);

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
