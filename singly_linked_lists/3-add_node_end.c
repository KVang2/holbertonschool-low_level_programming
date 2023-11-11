#include "lists.h"
/**
 * add_node_end - addds new node at the end of a list
 * @head: head of str
 * @str: string
 * Return: address of new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *last = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
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
