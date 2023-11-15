#include "lists.h"
/**
 * print_dlistint - prints all elements of list
 * @h: elements
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{

	if (h == NULL)
	{
		return (0);
	}
	for (n = 1; h->next != NULL; n++)
	{
		h = h->next;
	}
	return (n);
}
