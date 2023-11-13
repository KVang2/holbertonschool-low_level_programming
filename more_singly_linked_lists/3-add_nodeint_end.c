#include "lists.h"
/**
 * add_nodeint_end - adding node at the end
 * @head: start of list
 * @n: int for list
 * Return: address of new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;

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
	}
	return (new);
}
