
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list..
 * @head: pointer the list.
 * Return:  value 1 or -1.
 */
/* Function to reverse the linked list */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current, *next;

	if (!head || !(*head))
	{
		return (NULL);
	}

	if (!(*head)->next)
	{
		return (*head);
	}

	prev = NULL;
	current = *head;
	next = NULL;
	while (current)
	{
		next = current->next;

		current->next = prev;

		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
