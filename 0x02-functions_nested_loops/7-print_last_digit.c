#include "main.h"

/**
 * print_last_digit - function thst prints the last digit of a number
 *
 *@a: last integer
 *
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int result;

	if (a >= 0)
	{
		result = a % 10;
	}
	else
	{
		result = -1 * (a % 10);
	}
	_putchar(result + '0');

	return (result);
}
