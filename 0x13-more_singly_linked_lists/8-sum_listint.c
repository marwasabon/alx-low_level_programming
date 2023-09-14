

#include "lists.h"
/**
 * sum_listint -returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer the list.
 * Return: sum of list.
 */
	int
sum_listint (listint_t *head)
{
	int sum;

	const listint_t *p;

	sum = 0;
	p = head;

	if (!p)
		return (0);


	while (p != NULL)
	{

		sum += p->n;
		p = p->next;
	}

	return (sum);
}

