#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 *
 * @c: character string pointer
 * Return: char pointer
 */
char *rot13(char *c)
{
	int a, b;
	char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm",
	alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (alphabet[b] == c[a])
			{
				c[a] = rot_13[b];
				break;
			}
		}
	}
	return (c);
}
