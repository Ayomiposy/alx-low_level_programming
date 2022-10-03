#include <stdio.h>
#include "main.h"

/**
 * main - Program multiples two numbers
 * @argc: Counts Arguments
 * @argv: The Arguments counted
 *
 * Return: Always 1
 */

int main(int argc, char *argv[])
{
	int i, mul = 0;

	if (argc > 0)
	{
		for (i = 0; i <= 2; i++)
		{
			mul = atoi(argv[1]) * atoi(argv[2]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (1);

}
