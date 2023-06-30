#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: pointer
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i] == ' ' || str[i] == '\t' ||
					str[i] == '\n' || str[i] == ',' || str[i] == ';' ||
					str[i] == '.' || str[i] == '!' || str[i] == '?' ||
					str[i] == '"' || str[i] == '(' || str[i] == ')' ||
					str[i] == '{' || str[i] == '}')
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
