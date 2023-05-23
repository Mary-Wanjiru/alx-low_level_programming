#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 *
 * @a: The number to be computed.
 *
 * Return: Absolute value of an int or 0
 */
int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}

