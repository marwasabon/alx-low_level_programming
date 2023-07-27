#include "lists.h"
/**
 * add_node - prints all the elements of a list_t list.
 * @head: pointer the list.
 * @str: string to be added.
 * Return: length of list.
 */
	list_t *
add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length;

	length = 0;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	while (str[length])
		length++;
	new_node->len = length;

	new_node->str = strdup(str);
	if (!(*head))
	new_node->next = NULL;
	else
		new_node->next = *head;
	*head = new_node;

	return (*head);


}
