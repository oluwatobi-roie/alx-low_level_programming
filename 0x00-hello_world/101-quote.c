/*
 * File: 101-quote.c
 * Author: Oluwatobi
 */

#include <unistd.h>
/*
 * main- prints some document in the primary page
 *
 * Return 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\"-Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
