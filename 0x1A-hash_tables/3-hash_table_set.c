#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table you want to update the key/value to
 * @key: the key, which can not be empty
 * @value: the value associated to the key
 * Return: integer 1 if succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;

	if (ht && value && key)
	{
		index = key_index((const unsigned char *)key, ht->size);
		if (!add_table_node(&ht->array[index], key, value))
			return (0);
		return (1);
	}
	else
		return (0);
}

/**
 * add_table_node - update node in linked list related to hash table
 *
 * @head:
 * @key: new node's key (or the key refering to updating material)
 * @value: new node's value (or updating one)
 * Return: hash_node_t*
 */
hash_node_t *add_table_node(hash_node_t **head, const char *key,
														const char *value)
{
	hash_node_t *current = NULL, *_head = *head;

	/* validate-check - update value existent key */
	while (_head)
	{
		if (strcmp(_head->key, key) == 0)
		{
			free(_head->value);
			_head->value = strdup(value);
			return (*head);
		}
		_head = _head->next;
	}
	current = malloc(sizeof(hash_node_t));
	if (current)
	{
		current->key = strdup(key);
		current->value = strdup(value);
		current->next = *head;
		*head = current;
		return (*head);
	}
	else
		return (NULL);
}
