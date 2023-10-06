#include "hash_tables.h"

/**
 * hash_table_set - sets an element to the hash table
 * @key: input
 * @ht: pointer to hash table
 * @value: element
 * Return: 1 (Success) or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	char *value_copy = NULL, *key_copy = NULL;
	unsigned long int index;

	if (!ht || !key)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		free(value_copy);
	return (0);

	key_copy = strdup(key);
	if (!key_copy)
		free(key_copy);
	return (0);

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] && *(ht->array[index]->key) == *key)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = value_copy;
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		free(value_copy);
	return (0);

	new_node->key = key_copy;
	new_node->value = value_copy;
	new_node->next = NULL;

	if (ht->array[index])
		new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
