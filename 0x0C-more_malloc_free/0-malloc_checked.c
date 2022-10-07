#include <stdlib.h>

/**
 * malloc_checked - function that allocate memory using malloc
 *
 * @b: size of the memory to be allocated.
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *allocate;

	allocate = malloc(b);
	if (allocate == NULL)
		exit(98);
	return (allocate);
}
