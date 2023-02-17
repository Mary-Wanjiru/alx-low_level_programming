#include <stdio.h>

/**
 * main - Entry point
 *
 * description - a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 48;
	char c = 'a';

	while (d < 58)
	{
		putchar(d);
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
