#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: is the size of the array
 * Return: hash_table_t* or NULL if something goes wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i = 0;

	if (size)
	{
		/* set memory configuration for a non local data-set pointer */
		new_table = malloc(sizeof(hash_table_t));
		if (!new_table)
			return (NULL);

		/* charge values */
		new_table->size = size;
		new_table->array = NULL;

		new_table->array = malloc(sizeof(hash_node_t *) * size);

		if (!new_table->array)
		{
			free(new_table);
			return (NULL);
		}
		/* initialize node pointers to NULL */
		for (i = 0; i < size; i++)
			new_table->array[i] = NULL;
	}
	return (new_table);
}
