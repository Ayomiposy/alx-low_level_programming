#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: the string pointer
 *
 * Return: the length of string
 *
 */

void _puts(char *str)
{
while (*str)
{
	_putchar(*str++);
}
_putchar('\n');
}
