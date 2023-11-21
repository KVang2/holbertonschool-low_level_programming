#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	int check = 0;

	if (!ht)
	{
		return;
	}
	printf("{");
	for ( i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (check)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
				check = 1;
				current = current->next;
		}
	}
	printf("}\n");
}
