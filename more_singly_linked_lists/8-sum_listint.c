#include "lists.h"
/**
 * sum_listint - returning sum of all data
 * @head: start of list
 * Return: 0 if empty
*/
int sum_listint(listint_t *head)
{
	listint_t *add;
	int sum = 0;

	while (head == NULL)
	{
		sum += add->n;
		add = add->next;
	}
	return (sum);
}
