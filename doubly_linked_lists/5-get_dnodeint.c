#include "lists.h"
/**
 * get_dnodeint_at_index - returning nth node of linked list
 * @head: start of node
 * @index: index of node
 * Return: NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	current = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
