#include "main.h"

/**
 * _isalpha - Function that checks for alphabetic character.
 * @c: Argument passed
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase or 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
