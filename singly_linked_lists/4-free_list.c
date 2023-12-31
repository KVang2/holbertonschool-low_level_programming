#include "lists.h"
/**
 * free_list - a function that frees a list
 * @head: head of link
 * Return: void
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (temp->str)
		{
			free(temp->str);
		}
	free(temp);
	}
}
