#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp_store;
	listp_t *hd;

	if (head != NULL)
	{
		hd = *head;
		while ((temp_store = hd) != NULL)
		{
			hd = hd->next;
			free(temp_store);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list listint_t
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ncount = 0;
	listp_t *hptr, *new, *add;
	listint_t *hd;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (ncount);
			}
		}

		hd = *h;
		*h = (*h)->next;
		free(hd);
		ncount++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (ncount);
}
