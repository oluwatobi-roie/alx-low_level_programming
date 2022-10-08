#include <stdlib.h>
#include "main.h"

/**
 * array_range- function that creates an arrays of integers
 *
 * @min: minimum integer value.
 * @max: Maximum integer values.
 *
 * Return: a pointer to the newly created array.
 *
 * Description: if man > min || mallo fails return NULL
 *
 */

int *array_range(int min, int max)
{
	int *output, i, sum;

	if (min > max)
		return (NULL);

	sum = max - min;
	output = malloc(sizeof(*output) * (sum + 1));

	if (output == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		output[i] = min;

	return (output);
}
