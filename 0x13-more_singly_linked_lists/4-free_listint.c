
#include "lists.h"
/**
 * free_listint - free all the elements of a list_t list.
 * @head: pointer the list.
 * Return: length of list.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	listint_t *next;

	current = head;

	while (current)
	{
		next = current->next;

		free(current);
		current = next;
	}
}

