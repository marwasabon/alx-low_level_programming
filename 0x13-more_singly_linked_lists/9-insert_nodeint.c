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
	if (!(*head) && idx == 0)
	{
		*head = new_node(n);
		return (*head);
	}
	current = *head;
	while (current)
	{
		if (idx == 0)
		{
			*head = new_node(n);
			(*head)->next = current;
			return (*head);
		}
		else if (i == idx - 1)
		{
			new = new_node(n);
			new->next = current->next;
			temp->next = new;
			return (new);
		}
		current = current->next;
		i++;
	}
	return (NULL);
/**
 * new_node - creates a new list node.
 * @n: number.
 * Return: pointer to the new node.
 */
listint_t *new_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}
