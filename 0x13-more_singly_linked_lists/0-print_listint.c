#include "lists.h"
/**
 * print_listint - prints all the integers elements of a list_t list.
 * @h: pointer the list.
 * Return: length of list.
 */
	size_t
print_listint(const listint_t *h)
{

	int size;
	const listint_t *p;

	size = 0;
	p = h;

	if (!p)
		return (0);


	while (p != NULL)
	{

		printf("%d", p->n);

		printf("\n");
		p = p->next;
		size++;
	}

	return (size);
}
