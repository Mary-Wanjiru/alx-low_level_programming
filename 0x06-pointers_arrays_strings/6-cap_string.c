#include "main.h"
/**
* cap_string - A function that capitalizes all words of a string
* @str: string to be capitalized
* Return: Pointer to the changed string
*/
char *cap_string(char *str)
{
	int a = 0;

	while (str[a])
	{
		while (!(str[a] >= 'a' && str[a] <= 'z'))
		a++;

		if (str[a - 1] == ' ' ||
		str[a - 1] == '\t' ||
		str[a - 1] == '\n' ||
		str[a - 1] == ',' ||
		str[a - 1] == ';' ||
		str[a - 1] == '.' ||
		str[a - 1] == '!' ||
		str[a - 1] == '?' ||
		str[a - 1] == '"' ||
		str[a - 1] == '(' ||
		str[a - 1] == ')' ||
		str[a - 1] == '{' ||
		str[a - 1] == '}' ||
		a == 0)
		str[a] -= 32;
		a++;
	}
	return (str);
}
