#include "main.h"

/**
* _strcpy - a function that copies the string pointed to by src
* including terminating null byte
* @dest: where string needs to be copied
* @src: where string is
* Return: (p)
*/
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return (p);
}
