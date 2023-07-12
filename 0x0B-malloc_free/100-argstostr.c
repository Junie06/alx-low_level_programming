#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: vector count
 * @av: arguments strings from the terminal
 * Return: pointer or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, r = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l = l + ac;

	ptr = malloc(l * (sizeof(char) + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
		ptr[r] = av[i][j];
		r++;
		}
		if (ptr[r] == '\0')
		{
			ptr[r++] = '\n';
		}
	}
	return (ptr);
}
