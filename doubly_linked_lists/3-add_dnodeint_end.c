#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: start of node
 * @n: data
 * Return: address of new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *last = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
		{
		last = last->next;
		}
	last->next = new;
	new->prev = last;
	}
	return (new);
}
