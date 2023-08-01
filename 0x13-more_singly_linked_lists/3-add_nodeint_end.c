
#include "lists.h"
/**
 * add_nodeint_end - prints all the elements of a list_t list.
 * @head: pointer the list.
 * @n: int to be added.
 * Return: length of list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;

	listint_t *new_node

	if (*head == NULL)
	{
		return (add_nodeint(head, n));
	}

	new_node = create_node(n);
	if (new_node == NULL)
	{
		return (NULL);
	}
	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	current->next = new_node;

	return (new_node);
}
