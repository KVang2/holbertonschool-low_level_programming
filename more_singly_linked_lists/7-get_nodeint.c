#include "lists.h"
/**
 * get_nodeint_at_index - returning the nth node
 * @head: start of link
 * @index: unsigned int
 * Return: NULL if node doesn't exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	current = head;
/* check list to see if its empty */
	if (head == NULL)
	{
		return (NULL);
	}
/* loop through the list */
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
