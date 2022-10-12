#include "function_pointers.h"

/**
 * print_name - functions that prints a name
 *
 * @name: parameter name to be printed
 * @f: a pointer ro a function that prints a name
 *
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
