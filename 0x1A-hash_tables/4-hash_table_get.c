#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table you want to look into
 * @key: the key you are using
 * Return: char* associated with the element, NULL if the
 *  key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL;
	unsigned long int index = 0;

	if (ht && key)
	{
		index = key_index((const unsigned char *)key, ht->size);
		current = ht->array[index];
		if (!current)
			return (NULL);
		while (current)
		{
			if (strcmp(current->key, key) == 0)
				return (current->value);
			current = current->next;
		}
		return (NULL);
	}
	return (NULL);
}
