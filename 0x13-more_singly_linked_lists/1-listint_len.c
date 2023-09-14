#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer the list.
 * Return: length of list.
 */
	size_t
listint_len(const listint_t *h)
{

	int size;
	const listint_t *p;

	size = 0;
	p = h;

	if (!p)
		return (0);


	while (p != NULL)
	{


		p = p->next;
		size++;
	}

	return (size);
}

