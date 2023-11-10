#include "lists.h"
/**
 * add_node - adds new node at the beginning of a list
 * @head: node 1
 * @str: const char
 * Return: address of new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
return (new);
}
