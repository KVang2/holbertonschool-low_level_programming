#include "hash_tables.h"
/**
 * key_index - function that gives you index of a key
 * @key: key
 * @size: size of array
 * Return: index at key/value
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
