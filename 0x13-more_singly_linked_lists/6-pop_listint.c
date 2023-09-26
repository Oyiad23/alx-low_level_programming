#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: returns head node's data (n)
 * or 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_store;
	int n;

	temp_store = *head;

	if (temp_store == NULL)
		return (0);

	*head = temp_store->next;
	n = temp_store->n;
	free(temp_store);
	return (n);
}
