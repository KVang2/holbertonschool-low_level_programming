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

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL) {
			(*h)->prev = new;
			*h = new;
			return (new);
		}
	}
	temp = *h;
	while (temp != NULL)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			if (temp->next != NULL)
			{
			temp->next->prev = new;
			temp->next = new;
			new->prev = temp;
			return (new);
			}
		i++;
		temp = temp->next;
		}
	}
	return (NULL);
}
