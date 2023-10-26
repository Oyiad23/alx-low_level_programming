#include "lists.h"
/**
 * find_listint_loop - finds the loop contained
 * in a linked list
 * @head : pointer to the head of the linked list
 * Return: returns pointer the node where the loop starts,
 *or NULL - if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first_node, *second_node;

	if (head == NULL || head->next == NULL)
		return (NULL);

	first_node = head->next;
	second_node = (head->next)->next;

	while (second_node)
	{
		if (first_node == second_node)
		{
			first_node = head;

			while (first_node != second_node)
			{
				first_node = first_node->next;
				second_node = second_node->next;
			}

			return (first_node);
		}

		first_node = first_node->next;
		second_node = (second_node->next)->next;
	}

	return (NULL);
}
