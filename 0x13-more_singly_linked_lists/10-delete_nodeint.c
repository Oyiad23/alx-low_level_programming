#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node by a given
 * index of a linked list
 * @head : pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 - if function succeeds;-1 - if function fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp_store, *hold = *head;
unsigned int node;

if (hold == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(hold);
return (1);
}

for (node = 0; node < (index - 1); node++)
{
if (hold->next == NULL)
return (-1);

hold = hold->next;
}

temp_store = hold->next;
hold->next = temp_store->next;
free(temp_store);
return (1);
}
