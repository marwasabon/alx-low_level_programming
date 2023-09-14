#include "lists.h"
/**
 * insert_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer the list.
 * @n: the given index.
 * @idx: the given index to be added at.
 * Return: length of list.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;

	listint_t *new, *current;

	if (!(*head) && idx == 0)
	{
		*head = create_node(n);
		return (*head);
	}
	current = *head;
	i = 0;
	while (current)
	{
		if (idx == 0)
		{
			*head = create_node(n);
			(*head)->next = current;
			return (*head);
		}
		else if (i == idx - 1)
		{
			new = create_node(n);
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
