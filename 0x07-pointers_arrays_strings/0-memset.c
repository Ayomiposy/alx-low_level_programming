#include "main.h"

/**
 * _memset - fills memory with a constant bytes
 *
 * @s: pointer of memory
 * @b: value of set
 * @n: number of byte
 *
 * Return: return s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		b = *(s + i);
	}
	return (s);
}
