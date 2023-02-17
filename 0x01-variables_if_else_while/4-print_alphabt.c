#include <stdio.h>

/**
 * main - Entry point
 *
 * descripion - a program that prints in lowercase using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);

		c++;
	}
	putchar('\n');

	return (0);
}
