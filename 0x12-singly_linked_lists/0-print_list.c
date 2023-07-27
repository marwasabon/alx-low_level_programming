#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer the list.
 * Return: length of list.
 */
	size_t
print_list(const list_t *h)
{
	int size;
	const list_t *p;

	size = 0;
	p = h;

	if (!p)
		return (0);


	while (p != NULL)
	{
		printf("[%d] ", p->len);
		if (p->str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p->str);
		}
		printf("\n");
		p = p->next;
		size++;
	}

	return (size);

}
