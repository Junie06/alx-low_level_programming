#include "main.h"
/**
 * print_binary - function that converts a decimal to binary
 * @n: value passed as argument
 * Return: the converted  value else 0
 */
void print_binary(unsigned long int n)
{
	int i, bits, lead_zero = 1;

	/*calculates the size of the data in bytes and coverts it to number of bits*/
	bits = sizeof(unsigned long int) * 8;

	for (i = bits - 1; i >= 0; i--)
	{
		/* extract the i-th bit*/
		bits = (n >> i) & 1;

		if (bits)
		{
			lead_zero = 0;
			_putchar('1');
		}
		else if (!lead_zero)
		{
			_putchar('0');
		}
	}
	if (lead_zero)
		_putchar('0');
}
