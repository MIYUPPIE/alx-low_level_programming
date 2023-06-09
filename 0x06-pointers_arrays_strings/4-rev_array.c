/*
 * File: 4-rev_array.c
 * Auth: Okanlawon Olayemi
 */

#include "main.h"

/**
 * reverse_array - reverse array elements
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
int tmp, beg = 0;
int end = n - 1;
while (beg < end)
{
tmp = *(a + beg);
*(a + beg) = *(a + end);
*(a + end) = tmp;
beg++, end--;
}
}
