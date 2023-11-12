#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: elements
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h == NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
