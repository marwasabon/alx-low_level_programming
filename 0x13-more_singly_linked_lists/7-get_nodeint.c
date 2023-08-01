#include "lists.h"
/**
 *get_nodeint_at_index - returns the nth node of linked list.
 * @head: pointer the list.
 * @index: index to find the node.
 * Return: list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{


	int count;

	listint_t *current;

	current = head;

	count =  0;

	while (current)
	{
		if (count == index)
			return (current->data);
		count++;
		current = current->next;
	}
}
