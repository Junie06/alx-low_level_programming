#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: Input
 * @size: fixed size of table/array
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
