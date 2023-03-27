#include "main.h"

/**
 * rev_string - reverse a string.
 *
 * @s: the string to be reversed.
 */

void rev_string(char *s)
{
	int l, j, i;
	char v1, v2;

	for (l = 0; s[l] != '\0'; l++)
	{
	}

	j = l - 1;
	i = 0;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
