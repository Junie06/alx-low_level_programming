#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet in lowercase without q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 26; i++)
	{
		if (i != 5 && i != 17)
			putchar(i);
	}
	putchar('\n');

	return (0);
}
