#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * string with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int length = 0;
	int m = 0;
	char *y = str;
	int l;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	m = length - 1;
	for (l = 0; l <= m; l++)
	{
		if (l % 2 == 0)
		{
			_putchar(str[l]);
		}
	}
	_putchar('\n');
}
