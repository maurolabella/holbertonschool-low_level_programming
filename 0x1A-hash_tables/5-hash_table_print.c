#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i = 0;
	int flag = 0;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				current = ht->array[i];
				while (current)
				{
					if (flag == 1)
						printf(", ");
					printf("'%s': '%s'", current->key, current->value);
					current = current->next;
					flag = 1;
				}
			}
		}
		printf("}\n");
	}
}
