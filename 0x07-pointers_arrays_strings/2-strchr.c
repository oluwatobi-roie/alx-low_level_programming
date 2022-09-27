#include "main.h"

/**
 * _strchr - entry method for the function
 * 
 * Descrtiption: Returns a pointer to the first occurrence of the character
 *               c in the string s, or NULL if the character is not found
 * 
 * @s: string value to be searched
 * @c: character value to search for
 * 
 * Return: Pointer or Null
 * 
 */

char *_strchr(char *s, char c)
{
    char *string = s;
    char search = c;
    int i = 0;
    for (; string[i] >= '\0'; i++)
    {
        if (string[i] == search)
        return(string + i);
    }
    return("\0");
}
