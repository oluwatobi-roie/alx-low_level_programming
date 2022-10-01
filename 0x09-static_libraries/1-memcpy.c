#include "main.h"

/**
 * _memcpy - entry method for the function
 *
 * description: The _memcpy() function copies n bytes
 *              from memory area src to memory area dest
 *
 *
 * @dest: Destination of the memory tocopy
 * @src: Source of the memory we are copying
 * @n: location address of the memory we are copying
 *
 * Return:  a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *source = src;
	char *destination = dest;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (destination);

}
