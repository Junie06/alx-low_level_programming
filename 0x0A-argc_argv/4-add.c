#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two positive number
 * @argc: count
 * @argv: array
 * Return: 0 (Success), 0r 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;

	if (argc == 1)
	{
		;
	}

	for (i = 1; argv[i]; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
