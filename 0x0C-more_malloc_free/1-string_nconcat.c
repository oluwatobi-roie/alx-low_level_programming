#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- a function that concatenates two strings
 *
 * Description: the returned pointer shall point to a newly
 * allocated space in memory which cotains s1, followed by
 * the first n bytes of s2, and null teminated
 *
 * @s1: firs string to conacatenate
 * @s2: sencond string to concatenate
 * @n: an integer value of the total numbers of s2
 *
 * Return: returns a char of string of the new output
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output;
	unsigned int s1_length, s2_length, sum, i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	if (n > s2_length)
		s2_length = n;

	sum = s1_length + n;
	output = malloc(sum + 1);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < sum; i++)
	{
		if (i < s1_length)
			output[i] = s1[i];
		output[i] = s1[i - s1_length];
	}
	output[i] = '\0';
	return (output);
}
