#include<stdio.h>
#include<unistd.h>

/**
 * main - this is where the program begins
 *
 * Description: Prints Dora's quote
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar,
	2015-10-19\n", 59);
	write(2, "\n", 1);
	return (1);
}
