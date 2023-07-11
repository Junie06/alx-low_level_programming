#include "main.h"
#include <stdlib.h>

/**
 * _strdup - it returns a pointer to a newly allocated space in memory
 * @str: argument passed
 * Return: pointer is successful, else null
 */
char *_strdup(char *str)
{
	char *ptstr;
	int len, count;

	if (str == NULL)
	{
		return (NULL);
	}
	/*check for length of string*/
	for (len = 0; str[len] != '\0'; len++)
		;
	ptstr = malloc(len * sizeof(char) + 1);

	if (!ptstr)
	{
		return (NULL);
	}
	/*copy the string*/
	for (count = 0; str[count] != '\0'; count++)
	{
		ptstr[count] = str[count];
	}
	ptstr[count] = '\0';
	return (ptstr);
}
