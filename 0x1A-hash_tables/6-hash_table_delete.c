#include "hash_tables.h"

/**
 * hash_table_delete - deletes an entire hash table
 * @ht: table's pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL;
	hash_node_t *tmp = NULL;
	unsigned long int i = 0;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				current = ht->array[i];
				while (current)
				{
					tmp = current;
					current = current->next;
					free(tmp->key);
					free(tmp->value);
					free(tmp);
				}
			}
		}
		free(ht->array);
		free(ht);
	}
}
