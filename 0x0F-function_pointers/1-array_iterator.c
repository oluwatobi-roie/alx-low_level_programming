#include "function_pointers.h"

/**
 * array_iterator - function that executes other functions
 *
 * @array: the array to be printed
 * @size: the size of the array
 * @action: the function pointer
 *
 * Return: Returns nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
