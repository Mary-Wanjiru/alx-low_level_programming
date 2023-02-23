#include "main.h"
/**
 * print_square - a function that prints a square using #
 *
 * @size: number of squares
 *
 * Return: void
 */
void print_square(int size)
{
	int i = 0, a;

	if (size > 0)
	{
		while (i < size)
		{
			a = 0;
			while (a < size)
			{
				_putchar(35);
				a++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
