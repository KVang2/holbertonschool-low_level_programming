#include "lists.h"
/**
 * print_listint - prints all elements of a list
 * @h: elements
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	while (h != NULL)
	{
		printf("%d ", h->n);
		h = h->next;
	}
	printf("\n");
}
