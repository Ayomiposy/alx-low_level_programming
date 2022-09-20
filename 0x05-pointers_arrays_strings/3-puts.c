#include "main.h"

/**
 * _puts - print a string to stdout
 *
 * @str: char array string type
 *
 * Description: can only use _putchar
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
