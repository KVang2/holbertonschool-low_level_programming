#include "lists.h"
/**
 * print_dlistint - prints all elements of list
 * @h: elements
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h->next != NULL; i++)
	{
		printf("%d \n", h->n);
		h = h->next;
	}
	return (n);
}
