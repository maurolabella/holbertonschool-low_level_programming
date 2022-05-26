#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int i = 0;
	hash_node_t *current = NULL;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");

	for (i = 0; i < 1024; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				printf("\t%s\t%s\n", current->key, current->value);
				current = current->next;
			}
		}
	}
	return (EXIT_SUCCESS);
}