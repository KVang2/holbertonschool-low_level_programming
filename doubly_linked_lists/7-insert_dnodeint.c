#include "lists.h"
/**
 * insert_dnodeint_at_index - insert new node at a given position
 * @h: start of node
 * @idx: unsigned int, index
 * @n: data
 * Return: NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	
	new->n = n;
	new->next = prev;
	prev->next = new;
	new->prev = prev;
	if (*head == NULL)
	{
		return (NULL);
	}
	while (temp != idx - 1)
	{
		*head = new;
		count++;
	}
	return (new);
}
