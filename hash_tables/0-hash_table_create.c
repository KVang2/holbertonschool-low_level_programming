#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: is size of array
 * Return: pointer to newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));

	table->size = size;
	table->array = malloc(table->size, sizeof(hash_node_t));

	if (table == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < table->sizes; i++)
	{
	table->items[i] = NULL;
	}
	return (table);
}
