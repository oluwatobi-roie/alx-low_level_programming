#include "main.h"

/**
 * _isdigit - check to see if its a positive number
 * 
 * @c: value we are checking
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
