#include "lists.h"
/**
 * dlistint_len - return number of nodes in a dlistint_t list
 * @h: pointer to dlsitint_t doubly linked list
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
