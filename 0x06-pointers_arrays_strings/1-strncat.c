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
	int i, j, len1;

	len1 = 0;

	for (i = 0; dest[len1] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; i <= n && src[i] != '\0'; i++)
	{
		dest[len + 1] = src[i];
	}
	dest[len + 1] = '\0';
	return (dest);
}
