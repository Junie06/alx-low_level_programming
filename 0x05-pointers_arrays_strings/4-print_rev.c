#include "main.h"

/**
 * print_rev - function that prints a string, in reverse followed by a new line
 * @s: parameter which is a pointer
 * Return: null
 */
void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
			while (start--)
				_putchar(s[start]);
	_putchar('\n');
}
