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

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	value_copy = strdup(value);
	if (!value_copy)
		return (0);

	key_copy = strdup(key);
	if (!key_copy)i
		free(new_node);
	return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = value_copy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		free(value_copy);
	return (0);

	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
