#include <stdio.h>
#include "main.h"

/**
 * main - Program prints all arguments it receives
 * @argc: Counts Arguments
 * @argv: The Arguments counted
 *
 * Return: Always 0;
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	}
	return (0);
}
