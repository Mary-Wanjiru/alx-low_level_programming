#include "main.h"
#include <stdio.h>

/**
 * _strcat - function to concatenate two strings and return a new string
 *
 * @dest: string 1
 * @src: string 2
 * Return: char pointer
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, a;

	while (dest[dlen])

	{
		dlen++;
	}

	for (a = 0; src[a] != 0; a++)
	{
		dest[dlen] = src[a];
		dlen++;

	}

	dest[dlen] = '\0';
	return (dest);
}
