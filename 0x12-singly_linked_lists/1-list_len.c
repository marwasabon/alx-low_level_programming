#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"


/**
 * print_len - get the length of all the elements of a list_t list.
 * @h: pointer the list.
 * Return: length of list.
 */
	size_t
list_len(const list_t *h)
{

	int size;
	const list_t *p;

	size = 0;
	p = h;
	if (!p)
		return (0);


	while (p)
	{

		p = p->next;
		size++;
	}

	return (size);

}
