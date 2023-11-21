#include "hash_tables.h"
/**
 * hash_table_set - adding an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: associated with the key
 * Return: 1 or 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *value_copy, *key_copy;
	hash_node_t *current, *new;

	if (!ht || !key || !*key || !value)
	{
		return (0);
	}
	value_copy = strdup(value);
	if (value_copy == NULL)
		return(0);
	index = key_index((const unsigned char*)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (!strcmp(key, current->key))
		{
			free(current->value);
			current->value = value_copy;
			return (1);
		}
		current = current->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	key_copy = strdup(key);
	if (key_copy == NULL)
		return (0);
	new->key = key_copy;
	new->value = value_copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
