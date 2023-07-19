#include "function_pointers.h"

/**
 * print_name - entry point
 * @name: the name passed
 * @f: function pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
