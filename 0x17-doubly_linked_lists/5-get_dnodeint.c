#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of a dlistint_t list
 * @head: head of linked list
 * @index: index of node to return
 * Return: address of nth node, null if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	return (head);
}
