#include <stdio.h>
#include "main.h"

/**
 * main - Program multiples two numbers
 * @argc: Counts Arguments
 * @argv: The Arguments counted
 *
 * Return: Always 0 if true, otherwise return 1
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	printf("%d\n", i * j);
	return (0);
	}
	printf("Error\n");
	return (1);
}
