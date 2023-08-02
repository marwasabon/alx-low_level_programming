
#include "lists.h"
/**
 * print_listint_safe - print all the elements of a list_t list.
 * @head: pointer the list.
 * Return: length of list.
 */

size_t print_listint_safe(const listint_t *head)
{

	const listint_t *slow_p, *fast_p;
	size_t count;

	slow_p = head;
	fast_p = head;
	count = 0;

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		printf("%d\n", slow_p->n);
		count++;

		if (slow_p == fast_p)
		{
			exit(98);
		}
	}

	return (count);
}
