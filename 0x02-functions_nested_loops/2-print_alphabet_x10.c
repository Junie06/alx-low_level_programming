#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 * Return - Nothing
 */
void print_alphabet_x10(void)
{
	char alp;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
		_putchar('\n');
	}


}
