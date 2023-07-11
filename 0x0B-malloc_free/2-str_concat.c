#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that calculates the length of a string.
 * @str: argument passed
 * Return: len
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: destination string
 * @s2: source string
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j;
	int len, len_1, len_2;

	if (s1 == NULL)
		len_1 = 0;
	else
		len_1 = _strlen(s1);

	if (s2 == NULL)
		len_2 = 0;
	else
		len_2 = _strlen(s2);

	len = len_1 + len_2;

	ptr = malloc((len * sizeof(char)) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < len_1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j < len_2; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';

	return (ptr);
}
