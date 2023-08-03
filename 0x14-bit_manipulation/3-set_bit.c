#include "main.h"

/**
 * set_bit - sets the digit of a bit to 1
 * @n: pointer to the value
 * @index: index of the bit to manipulate
 *
 * Return: 1 (Success) else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
