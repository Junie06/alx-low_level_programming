#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: Argument passed
 * Return: Uppercase character
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
