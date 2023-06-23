#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal
 * @n: Length of the line
 * Return: 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
		{
	if (n <= 0)
	_putchar('\n');
		}
	}
	_putchar('\n');
}
