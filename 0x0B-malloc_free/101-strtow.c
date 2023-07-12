#include "main.h"
#include <stdlib.h>

/**
 * count_word - function that counts words in a string
 * @s: string argument passed
 * Return: word count
 */
int count_word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c]; c++)
	{
		if (!s[c])
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - function that splits a string into words
 * @str: argument passed
 * Return: a pointer to a char else NULL
 */
char **strtow(char *str)
{
	char **ptr, *tmp;
	int i, len, j = 0, words, c = 0, start, end;

	for (len = 0; str[len]; len++)
		words = count_word(str);
	if (words == 0)
		return (NULL);

	ptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (!str[i] || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				ptr[j] = tmp - c;
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	ptr[j] = NULL;

	return (ptr);
}
