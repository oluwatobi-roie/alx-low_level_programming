#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: first Integer to be swapped.
 * @b: second Integer to be swaped.
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
