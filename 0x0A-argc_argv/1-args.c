#include <stdio.h>

/**
 * main - Entry point
 * @argc: count
 * @argv: array
 * Return: 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int count;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
			printf("%d\n", count);
	}
	return (0);
}
