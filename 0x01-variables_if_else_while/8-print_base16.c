#include <stdio.h>

/**
 * main - Prints numbers between 0-9 and letters a-f in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i < 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
