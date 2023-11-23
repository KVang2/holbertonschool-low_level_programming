#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *check, *frees;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		check = ht->array[i];
		while (check != NULL)
		{
			frees = check;
			check = check->next;
			if (frees->key)
			{
				free(frees->key);
			}
			if (frees->value)
			{
				free(frees->value);
			}
			free(frees);
		}
	}
	free(ht->array);
	free(ht);
}
