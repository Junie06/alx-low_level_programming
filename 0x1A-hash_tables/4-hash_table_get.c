#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (!ht || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	while (ht->array[index])
	{
		if (*(ht->array[index]->key) == *key)
			return (ht->array[index]->value);
	}
	ht->array[index] = ht->array[index]->next;
	return (NULL);
}
