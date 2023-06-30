#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: length
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len = 0;

	for (i = 0; dest[len] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}
	dest[len + j] = '\0';
	return (dest);
}
