
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
	unsigned int count;

	listint_t *prev, *new_node, *current;

	count = 0;
	prev = NULL;
	new_node = NULL;
	current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	while (current != NULL && count < idx)
	{
		prev = current;
		current = current->next;
		count++;
	}


	new_node->n = n;
	new_node->next = current;

	if (prev == NULL)
	{
		*head = new_node;
	} else
	{
		prev->next = new_node;
	}

	return (new_node);
}


