#include <stdio.h>
#include "main.h"

/**
 * main - Program prints number of argument
 * @argc: Counts argument
 * @argv: the arguments
 *
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
