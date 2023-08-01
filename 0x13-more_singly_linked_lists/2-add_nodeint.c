#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer the list.
 * @n: numbers to be added
 * Return: length of list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_noce = create_node(n);

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
/**
 * create_node - creates a int of  linked listint_t list.
 * @num: number to be added to  the list.
 * Return: a list.
 */
	listint_t *
create_node(const int num)
{
	listint_t *new_node;

	new_mode = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = num;


	new_node->next = NULL;
}
