#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *headlist = h;
	size_t num_ele;

	num_ele = 0;

	while (headlist != NULL)
	{
		headlist = headlist->next;
		num_ele++;
	}

	return (num_ele);
}
