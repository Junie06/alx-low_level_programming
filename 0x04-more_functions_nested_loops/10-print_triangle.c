#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (spaces = size - 1; spaces > i; spaces--)
		{
			_putchar(' ');
		}

		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
