#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings, followed by a new line
 * @separator: comma(,)
 * @n: preceeding last argument
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n - 1; i++)
	{
		str = va_arg(strings, char *);
		if (separator)
		{
			if (!str)
				printf("(nil)%s", separator);
			else
				printf("%s%s", str, separator);
		}
		if (!separator)
		{
			if (!str)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	printf("%s", va_arg(strings, char *));
	printf("\n");
	va_end(strings);
}
