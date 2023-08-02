#include "lists.h"

/**
 * find_listint_loop - print all the elements of a list_t list.
 * @head: pointer the list.
 * Return: length of list.
 */

listint_t *find_listint_loop(listint_t *head)

{
	listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}

	return (NULL);
}
