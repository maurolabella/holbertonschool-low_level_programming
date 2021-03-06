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
	shash_table_t *ht;

	ht = shash_table_create(1);
	shash_table_set(ht, "ab", "0");
	shash_table_print(ht);
	shash_table_set(ht, "abc", "1");
	shash_table_print(ht);
	shash_table_set(ht, "abcd", "1");
	shash_table_print(ht);
	shash_table_set(ht, "abcde", "1");
	shash_table_print(ht);
	shash_table_set(ht, "y", "0");
	shash_table_print(ht);
	shash_table_set(ht, "j", "1");
	shash_table_print(ht);
	shash_table_set(ht, "jk", "");
	shash_table_print(ht);
	printf("%s\n", shash_table_get(ht, "abc"));
	printf("%s\n", shash_table_get(ht, "jk"));
	shash_table_set(ht, "c", "2");
	shash_table_print(ht);
	shash_table_set(ht, "b", "3");
	shash_table_print(ht);
	shash_table_set(ht, "z", "4");
	shash_table_print(ht);
	shash_table_set(ht, "n", "5");
	shash_table_print(ht);
	shash_table_set(ht, "a", "9");
	shash_table_print(ht);
	shash_table_set(ht, "a", "6");
	shash_table_print(ht);
	shash_table_set(ht, "m", "7");
	shash_table_print(ht);
	shash_table_print_rev(ht);
	shash_table_delete(ht);
	return (EXIT_SUCCESS);
}
