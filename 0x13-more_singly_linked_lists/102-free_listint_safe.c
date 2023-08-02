
#include "lists.h"

/**
 * free_listint_safe - print all the elements of a list_t list.
 * @h: pointer the list.
 * Return: length of list.
 */

size_t free_listint_safe(listint_t **h)
{

	listint_t *slow, *fast, *temp;

	size_t count;

	slow = *h;
	fast = *h;
	count = 0;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			break;
		}
	}

	if (slow == fast)
	{
		slow = *h;
		while (slow != fast->next)
		{
			temp = slow;
			slow = slow->next;
			free(temp);
			count++;
		}
		free(fast->next);
		count++;
		fast->next = NULL;
	} else {
		while (*h)
		{
			temp = *h;
			*h = (*h)->next;
			free(temp);
			count++;
		}
	}

	return (count);
}

