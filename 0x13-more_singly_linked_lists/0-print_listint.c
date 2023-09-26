#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: number of counts.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *headlist = h;
	size_t ncount;

	ncount = 0;

while (headlist != NULL)
{
	printf("%d\n", headlist->n);
	headlist = headlist->next;
	ncount++;
}

return (ncount);
}
