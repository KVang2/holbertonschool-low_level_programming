#include "lists.h"
/**
 * sum_listint - returning sum of all data
 * @head: start of list
 * Return: 0 if empty
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
