#include "lists.h"

/**
 * print_list - Prints all the elements of list_t
 * @h: Pointer to the head of list_t
 *
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t NumCount = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		
	NumCount++;
	h = h->next;
	}
	
	return (NumCount);
}
