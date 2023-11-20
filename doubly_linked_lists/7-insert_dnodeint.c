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
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));

	if (h == NULL && new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new;
			*h = new;
			return (new);
		}
	}
	temp = *h;
	while (temp != NULL && i == idx -1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		free(new);
	}
		return (NULL);
}
