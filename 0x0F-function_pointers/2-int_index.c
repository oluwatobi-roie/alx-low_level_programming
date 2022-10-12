#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @array: the array to be printed
 * @size: the size of the array
 * @cmp: the function pointer
 *
 * Return: Returns nothing.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
