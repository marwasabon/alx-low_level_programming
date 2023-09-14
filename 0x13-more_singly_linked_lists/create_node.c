#include "lists.h"
/**
 * create_node - creates a new list node.
 * @num: number.
 * Return: pointer to the new node.
 */
listint_t *create_node(const int num)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = num;

	new_node->next = NULL;

	return (new_node);
}
