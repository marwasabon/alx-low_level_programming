#include "lists.h"
/**
 * add_dnodeint - add node to beginning of doubly linked list
 * @head: double pointer to head of list
 * @n: value to assign to new node
 * Return: pointer to new element, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
