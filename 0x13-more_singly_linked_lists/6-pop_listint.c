
#include "lists.h"
/**
 * pop_listint - free all the elements of a list_t list.
 * @head: pointer the list.
 * Return: length of list.
 */

int pop_listint(listint_t **head)
{


	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	free(*head);
	*head = temp;

}
