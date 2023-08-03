void print_binary(unsigned long int n)
{
	int i, bits;

	/* calculates the size of the data
	   * type in bytes and coverts it to
	   * number of bits
	   */
	bits = sizeof(unsigned long int) * 8;

	for (i = bits - 1; i >= 0; i--)
	{
		/* extract the i-th bit*/
		bits = (n >> i) & 1;
		_putchar(bit ? '1' : '0');
	}
}
