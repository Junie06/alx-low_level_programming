#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: dest
 * @needle: string
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && (haystack[i + j] == needle[j]); j++)
		{

		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);
}
