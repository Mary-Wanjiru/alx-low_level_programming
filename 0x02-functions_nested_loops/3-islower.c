#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: The character to be checked
 * Return: 1 if it is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
