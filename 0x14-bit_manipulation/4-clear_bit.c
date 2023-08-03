#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at the ith
 * @n: pointer to the number to manipulate
 * @index: position
 *
 * Return: 1 (Success) else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}
