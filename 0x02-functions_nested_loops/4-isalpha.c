#include "main.h"

/**
 * _isalpha - checks whether or not a character is an alphabet
 *
 * @c: The character to be checked.
 *
 * Return: 1 if it is lowercase or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
