#include "main.h"

/**
 * _islower - check if value entered is lower character
 * @c: parameter to be examined
 * Description: nested while loop
 *
 * Return: 0 or 1 (success)
 *
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
