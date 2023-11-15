#include "lists.h"
/**
 * add_dnodeint - adding new node at beginning
 * @head: start of node
 * @n: value
 * Return: address of the new element or NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new)
	{
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
