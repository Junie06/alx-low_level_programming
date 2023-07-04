#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: substring
 * @accept: accept
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;
	count = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (s[i] != accept[j])
			break;
	}
	return (count);
}
