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
	int i = 0;

	while (h != NULL)
	{
	printf("[%d] | [%s]\n", i, h->str);
	h = h->next;
	i++;
	}
	if (i == 0)
	{
	printf("(nil)\n");
	}
	return (i);
}
