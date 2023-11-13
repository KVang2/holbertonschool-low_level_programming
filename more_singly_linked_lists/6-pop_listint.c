#include "lists.h"
/**
 * pop_listint - deletes head of node and returns node's data(n)
 * @head: head node
 * Return: 0 if empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		temp = *head;
		*head = (*head)->next;
		i =  temp->n;
		free(temp);
	}
	return (i);
}
