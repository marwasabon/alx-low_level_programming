#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of linked list.
 * @head: pointer the list.
 * @index: the given index.
 * Return:  value 1 or -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	listint_t *node, *prev;

	i = 0;
	prev = NULL;

	if (!(*head))
		return (-1);
	node = *head;

	if (!index)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (i == index)
		{
			prev->next = node->next;
			free(node);
			return (1);
		}
		prev = node;
		node = node->next;
		i++;
	}

	return (-1);
}

