#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table, or NULL if something wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *table;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	(table)->size = size;

	(table)->array = malloc(8 * size);
	if ((table)->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (i < size)
	{
		(table)->array[i] = NULL;
		i++;
	}

	return (table);
}
