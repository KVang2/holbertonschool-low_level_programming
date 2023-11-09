#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - printing all elements of a list_t list
 * @h: var
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h->next != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	printf("[%d] %s\n", h->len, "(nil)");
	return (i);
}
