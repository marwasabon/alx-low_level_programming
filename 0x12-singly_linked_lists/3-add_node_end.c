
#include "lists.h"
/**
 * add_node_end - add all the elements of a list_t list.
 * @head: pointer the list.
 * @str: string to be added.
 * Return: new list.
 */

	list_t *
add_node_end(list_t **head, const char *str)
{

	list_t *new;


	if (!(*head))
	{
		*head = new_node(str);
		return (*head);
	}

	if (!(*head)->next)
	{
		new = new_node(str);
		new->next = (*head)->next;
		(*head)->next = new;
	}
	else
		add_node_end(&(*head)->next, str);

	return (*head);
}
/**
 * new_node - add a new node.
 * @str: string to be added.
 * Return: new node of the struct.
 */
	list_t *
new_node(const char *str)
{
	list_t *new;
	size_t len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	len = 0;
	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	return (new);
}

