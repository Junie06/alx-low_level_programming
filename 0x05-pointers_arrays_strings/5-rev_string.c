#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: parameter
 * Return: null
 */
void rev_string(char *s)
{
	int len, z, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++);
	z = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - z - 1];
		s[len - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}
