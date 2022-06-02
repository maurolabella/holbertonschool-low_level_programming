#include "hash_tables.h"

/**
 * shash_table_create - creates hash table
 *
 * @size: table size
 * Return: shash_table_t* variable (object)
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table = NULL;
	unsigned long int i = 0;

	if (size)
	{
		/* set memory configuration for a non local data-set pointer */
		new_table = malloc(sizeof(shash_table_t));
		if (!new_table)
			return (NULL);

		new_table->array = malloc(sizeof(shash_node_t *) * size);

		if (!new_table->array)
		{
			free(new_table);
			return (NULL);
		}

		/* charge values */
		new_table->size = size;
		new_table->shead = NULL;
		new_table->stail = NULL;

		/* initialize node pointers to NULL */
		for (i = 0; i < size; i++)
			new_table->array[i] = NULL;
		return (new_table);
	}
	return (NULL);
}

/**
 * shash_table_set - sets new items in the table
 *
 * @ht: the table
 * @key: the key as item identifier
 * @value: value as item property
 * Return: integer 1 if succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	shash_node_t *curr_bucket = NULL, *curr_ord = NULL, *new = NULL;

	if (ht && key)
	{
		curr_bucket = ht->array[index];
		if (curr_bucket)
		{
			if (coincident_key(&curr_bucket, key, value))
				return (1);
		}
		new = bucket_creation(key, value);
		if (!new)
			return (0);
		bucket_setting(&curr_bucket, &new, ht, index);
		order_cntrl(&curr_ord, &new, ht);
	}
	return (1);
}

/**
 * coincident_key - check same key existence and suppose value update
 *
 * @curr_bucket: the chain hash bucket
 * @key: new item's key
 * @value: new item's value
 * Return: int 1 in case of coincidence, 0 otherwise
 */
int coincident_key(shash_node_t **curr_bucket, const char *key,
									 const char *value)
{
	/* validate-check - update value existent key */
	while (*curr_bucket)
	{
		if (strcmp((*curr_bucket)->key, key) == 0)
		{
			free((*curr_bucket)->value);
			(*curr_bucket)->value = strdup(value);
			return (1);
		}
		if ((*curr_bucket)->next)
			*curr_bucket = (*curr_bucket)->next;
		else
			break;
	}
	return (0);
}

/**
 * bucket_creation - bucket creation
 * @key: key
 * @value: value
 *
 * Return: shash_node_t*
 */
shash_node_t *bucket_creation(const char *key, const char *value)
{
	shash_node_t *new = NULL;

	new = malloc(sizeof(shash_node_t));
	if (new)
	{
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = NULL;
		new->sprev = NULL;
		new->snext = NULL;
		return (new);
	}
	return (NULL);
}

/**
 * order_cntrl - positions pointer to insert new element in order
 *
 * @curr_ord: the pointer to be calculated
 * @new: the new bucket
 * @ht: the thable
 */
void order_cntrl(shash_node_t **curr_ord,
								 shash_node_t **new, shash_table_t *ht)
{
	if (!ht->shead)
	{
		ht->shead = *new;
		ht->stail = *new;
		return;
	}
	if (strcmp(ht->shead->key, (*new)->key) >= 0)
	{
		ht->shead->sprev = *new;
		(*new)->snext = ht->shead;
		ht->shead = *new;
		return;
	}
	else if (strcmp(ht->stail->key, (*new)->key) <= 0)
	{
		ht->stail->snext = *new;
		(*new)->sprev = ht->stail;
		ht->stail = *new;
		return;
	}
	else
	{
		*curr_ord = ht->shead;
		while (strcmp((*curr_ord)->key, (*new)->key) <= 0)
		{
			if (strcmp((*curr_ord)->snext->key, (*new)->key) <= 0)
				*curr_ord = (*curr_ord)->snext;
			else
				break;
		}
		(*new)->snext = (*curr_ord)->snext;
		(*new)->sprev = *curr_ord;
		if ((*curr_ord)->snext)
			(*curr_ord)->snext->sprev = *new;
		(*curr_ord)->snext = *new;
		return;
	}
}

/**
 * bucket_setting - bucket allocation
 * @curr_bucket:the worked position as the former left pointer
 * to a new position
 * @new: the new bucket
 * @ht: the thable
 * @index: index
 * Return: NULL in case already existent key, proper pointer otherwise
 */
void bucket_setting(shash_node_t **curr_bucket,
										shash_node_t **new, shash_table_t *ht, unsigned long int index)
{
	if (!(*curr_bucket))
		ht->array[index] = *new;
	else
	{
		(*curr_bucket)->next = *new;
	}
}

/**
 * shash_table_get - retrieves value given an item's key
 *
 * @ht: the hash table
 * @key: the key
 * Return:  char value
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current = NULL;
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

/**
 * shash_table_print - print_table
 *
 * @ht: the table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	int flag = 0;

	if (ht)
	{
		current = ht->shead;
		printf("{");
		while (current)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->snext;
			flag = 1;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - print_table in reverse
 *
 * @ht: the table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	int flag = 0;

	if (ht)
	{
		current = ht->stail;
		printf("{");
		while (current)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->sprev;
			flag = 1;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - deletes hash table
 *
 * @ht: the table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current = NULL, *tmp = NULL;

	if (ht)
	{
		current = ht->stail;
		while (current)
		{
			tmp = current;
			current = current->sprev;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		free(ht->array);
		free(ht);
	}
}
