#include "lists.h"
/**
 * dlistint_len - linking number of elements
 * @h: start of elements
 * Return: number of elements in linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
