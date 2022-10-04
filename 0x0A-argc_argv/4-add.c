#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - Program adds positive integers
 * @argc: Count arguments
 * @argv: Argument counted
 *
 * Return: return 0 if true, otherwise return 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
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
