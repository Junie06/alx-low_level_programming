#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp >= 'z'; alp--)
	{
		putchar(alp);
	}
	putchar("\n");

	return (0);
}
