#include "lists.h"
/**
 * free_listint - ffrees a listint_t list
 * @head: start of link
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
