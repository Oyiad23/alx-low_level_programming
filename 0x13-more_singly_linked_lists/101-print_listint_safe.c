#include "lists.h"

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in the linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_node;
	size_t x;

	new_node = malloc(size * sizeof(listint_t *));
	if (new_node == NULL)
	{
		free(list);
		exit(98);
	}
	for (x = 0; x < size - 1; x++)
		new_node[x] = list[x];
	new_node[x] = new;
	free(list);
	return (new_node);
}

/**
 * print_listint_safe - prints listint_t
 * @head: pointer to the start of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x, ncount = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (x = 0; x < ncount; x++)
		{
			if (head == list[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (ncount);
			}
		}
		ncount++;
		list = _r(list, ncount, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (ncount);
}
