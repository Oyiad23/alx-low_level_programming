#include "lists.h"

/**
 *free_list - Frees a list
 *@head: Points to the list head
 *
 */

void free_list(list_t *head)
{
	list_t *xtemp;

	while (head)
	{
		xtemp = head->next;
		free(head->str);
		free(head);
		head = xtemp;
	}
}
