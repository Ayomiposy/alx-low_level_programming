#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 *
 * @a: the first integer to be swapped
 *
 * @b: the second integer to be swapped
 *
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
