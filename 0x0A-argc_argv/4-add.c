#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Program adds positive integers
 * @argc: Count arguments
 * @argv: Argument counted
 *
 * Return: return 0 if true, otherwise return 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < argc; j++)
		{
			if (atoi(argv[i][j]) < 0)
			{
			printf("Error\n");
			return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
