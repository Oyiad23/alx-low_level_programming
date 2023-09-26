#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int sum_all_data = 0;

	while (head != NULL)
	{
		sum_all_data += head->n;
		head = head->next;
	}
	return (sum_all_data);
}
