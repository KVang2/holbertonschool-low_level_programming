#include "lists.h"
/**
 * add_dnodeint - adding new node at beginning
 * @head: start of node
 * @n: value
 * Return: address of the new element or NULL if failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	link->head = head;
	link->n = n;

	if (new == NULL)
	{
		last = new;
	}
	else
	{
		head->prev = new;
	}
	new->next = head;
	head = new;
return (new);
}
