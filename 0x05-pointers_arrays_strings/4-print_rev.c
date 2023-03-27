#include "main.h"

/**
 * print_rev - print a string in reverse.
 *
 * @s: the string to print in reverse.
 *
 */

void print_rev(char *s)
{
	int i = 0;
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
