#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal
 * @n: number of times to print
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
