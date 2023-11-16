#include "lists.h"
/**
 * sum_dlistint - sum of all the data
 * @head: start of a node
 * Return: sum of data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
