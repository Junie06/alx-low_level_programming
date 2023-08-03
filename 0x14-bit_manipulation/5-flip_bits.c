#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to go from
 * one number to another
 *
 * @n: first parametr
 * @m: second parameter
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exOR;

	exOR = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exOR >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
