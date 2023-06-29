#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, j, len1, len2;

	len1 = 0;
	len2 = 0;

	for (i = 0; dest[len1] != '\0'; i++)
	{
		len1++;
	}
	for (j = 0; src[len2] != '\0'; j++)
	{
		len2++;
	}

	for (i = 0; i <= len2; i++)
	{
		dest[len1 + 1] = src[i];
	}
	return (dest);
}
