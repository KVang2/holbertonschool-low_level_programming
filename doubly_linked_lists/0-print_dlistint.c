#include "lists.h"
/**
 * print_dlistint - prints all elements of list
 * @h: elements
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 1; h->next != NULL; i++)
	{
		if (h->n == NULL)
		{
			printf("[%d] %s\n", h->next);
		}
		h = h->next;
	}
	printf("[%d] %s\n", h->n);
	return (i);
}
