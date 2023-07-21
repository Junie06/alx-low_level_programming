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
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
		printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(strings);
}
