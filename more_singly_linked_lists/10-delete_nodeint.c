#include "lists.h"
/**
 * delete_nodeint_at_index - deleting node at index
 * @head: start of list
 * @index: unsigned int
 * Returns: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t curret = head;
	listint_t previous = NULL;

	if (head == NULL)
	{
		return (-1);
	}
	while (current->index != index)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		else
		{
			previous == current;
			current = current->next;
		}
	}
	if (current == head)
	{
		head = head->next;
	}
	else
	{
		previous->next = current->next;
	}
	return (1);
}
