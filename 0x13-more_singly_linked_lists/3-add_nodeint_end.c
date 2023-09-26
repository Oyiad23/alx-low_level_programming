#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of listint_t
 * @head: pointer to the head of the list
 * @n: data in the linked list
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *addnode_end = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (addnode_end != NULL)
	{
		while (addnode_end->next != NULL)
			addnode_end = addnode_end->next;
		addnode_end->next = new;
	}
	else
		*head = new;
	return (new);
}
