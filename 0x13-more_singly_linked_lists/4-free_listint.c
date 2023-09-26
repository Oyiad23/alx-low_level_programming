#include "lists.h"

/**
 * free_listint - frees linked listint_t
 * @head: head of the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp_store;

	while (head != NULL)
	{
		temp_store = head;
		head = head->next;
		free(temp_store);
	}
}
