#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table, or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* table = malloc(sizeof(hash_table_t));

	table->size = size;
	table->count = 0;
	table->items = (Ht_item**) calloc (table->size, sizeof(Ht_item*));
	for (int i=0; i<table->size; i++)
		table->items[i] = NULL;
	return table;
}
