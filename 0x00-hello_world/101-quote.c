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
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 25-10-19\n") - 1);
	write(2, "\n", 1);
	return (1);
}
