
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

	listint_t *new_node;

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
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer the list.
 * @n: numbers to be added
 * Return: length of list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

        listint_t *new_node;

        new_node = create_node(n);

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
