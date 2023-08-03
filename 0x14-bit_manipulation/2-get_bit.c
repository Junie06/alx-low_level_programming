#include "main.h"

/**
 * get_bit - returns the value of a bit given at an index
 * @n: value to return
 * @index: index of the value
 *
 * Return: value of bit else -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
