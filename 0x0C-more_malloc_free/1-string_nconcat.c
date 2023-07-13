#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - entry point to function that concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes
 * Return: a char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len, size, i, j;

	if (!s2)
		n = 0;
	else
	{
		for (len = 0; s2[len]; len++)
		;

		if (n >= len)
			n = len;
	}
	if (!s1)
		len = 0;
	else
	{
		for (len = 0; s1[len]; len++)
			;
	}

	size = len + n + 1;

	ptr = malloc(size * sizeof(char));
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
